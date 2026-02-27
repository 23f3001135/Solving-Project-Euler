#!/bin/bash

# strict mode:
# -e: exit immediately if a command exits with a non-zero status
# -u: treat unset variables as an error
# -o pipefail: return value of a pipeline is the value of the last (failed) command
set -euo pipefail

# Check if an argument is provided
if [ -z "${1:-}" ]; then
    echo "Error: No source file provided."
    echo "Usage: $0 <source_file>"
    exit 1
fi

SRC_FILE="$1"
BIN_NAME="binary"

# cleanup function to remove binary on script exit (success, error, or interrupt)
cleanup() {
    if [ -f "$BIN_NAME" ]; then
        rm "$BIN_NAME"
    fi
}

# Register the trap
trap cleanup EXIT

echo "Compiling and running $SRC_FILE..."

# Compile
clang++ -O3 -march=native -flto -std=c++20 "$SRC_FILE" -o "$BIN_NAME"

# Run
./"$BIN_NAME"