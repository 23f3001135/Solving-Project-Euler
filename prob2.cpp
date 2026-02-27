// Problem 2: Even Fibonacci numbers
// so fibonacci is sum of last 2 pair. (starting with 1 and 2)
#include <iostream>
using namespace std;

int main() {
  const long long limit = 4000000;
  long long a = 0, b = 1, next = 0, sum = 0;
  while (next < limit) {
    if (next % 2 == 0) {
      sum += next;
    }
    next = a + b;
    a = b;
    b = next;
  }
  cout << sum << endl;
  return 0;
}