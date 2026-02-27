# Solving Project Euler

This repository is my personal practice ground for solving problems from [Project Euler](https://projecteuler.net/).

It is not intended to be a production-grade codebase or a collaborative open-source project.  
Instead, it serves as a public record of my progress, consistency, and growth as a problem solver.

## Purpose

Project Euler problems are designed to sharpen mathematical thinking, algorithmic reasoning, and implementation skills.

I am solving them:
- To improve structured problem-solving ability
- To strengthen my understanding of mathematics and algorithms
- To practice writing clean and efficient C++
- To become incrementally better over time

This is a long-term journey. I will not be solving problems on a fixed schedule. Workdays come first. Most solutions will likely be written during weekends or free time.

The goal is consistency over intensity.  
Even 1% improvement compounds.

## Structure

Each problem is implemented as a standalone C++ file:

```

prob1.cpp
prob2.cpp
prob6.cpp
prob7.cpp
...

```

There is also:

```

registration.cpp

````

which was written as an additional computational exercise.

A small helper script `run.sh` is included to compile and run individual files.

## Compilation

The solutions are written in modern C++ (C++20).

To compile and run a file manually:

```bash
clang++ -std=c++20 -O2 prob1.cpp -o prob1
./prob1
````

Or use the provided script:

```bash
./run.sh prob1.cpp
```

## Philosophy

This repository reflects learning in motion:

* Some solutions may be straightforward
* Some may not be fully optimized
* Some may later be revisited and improved

Perfection is not the objective. Progress is.

## Disclaimer

This repository is a personal log of practice work.
It is not structured as reusable software and is not actively maintained as a library or framework.

If you are here browsing, feel free to explore — but understand that this space is primarily for growth, experimentation, and consistency.