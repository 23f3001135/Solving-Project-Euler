// find the 10001 prime number.
// solution:
// go through each number if a number is prime then add 1 to count.
#include <cmath>
#include <iostream>
using namespace std;

// check if prime
bool is_prime(int num) {

  if (num < 2) {
    return false;
  } else if (num >= 2 && num <= 3) {
    return true;
  }

  // checking upto sqrt of num
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int count = 0, i = 2, last_prime = -1;
  while (count < 10001) {
    if (is_prime(i)) {
      count++;
      last_prime = i;
    }
    i++;
  }
  cout << last_prime << endl;
}