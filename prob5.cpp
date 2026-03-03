#include <iostream>
#include <vector>

using namespace std;

bool prime(int n) {
  if (n <= 1) {
    return false;
  }
  if (n == 2 || n == 3) {
    return true;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int div = 20;

  long long answer = 1;

  vector<int> primes;
  for (int i = 1; i <= div; i++) {
    if (prime(i)) {
      primes.push_back(i);
    }
  }

  for (size_t i = 0; i < primes.size(); i++) {
    int current_prime = primes[i];
    long long max_prime_power = current_prime;

    while (max_prime_power * current_prime <= div) {
      max_prime_power *= current_prime;
    }

    answer *= max_prime_power;
  }

  cout << answer << endl;

  return 0;
}