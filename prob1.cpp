// Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream>
using namespace std;

// v2 - Using arithmetic progression (AP) sum forumla, s = (n/2)(2a + (n-1)d)
int main() {
  int n = 999;
  auto sum_of_multiples = [n](int x) {
    int p = n / x;
    return x * (p * (p + 1)) / 2;
  };
  cout << "Sum of multiples of 3 or 5 below 1000 is "
       << sum_of_multiples(3) + sum_of_multiples(5) - sum_of_multiples(15)
       << endl;
  return 0;
}

// orignal v1, quick-bench results 4.1ms
/*
int main()
{
    cout<<"test";
    int sum = 0;
    for (int i = 3; i <1000; i++) {
        if (i%3 == 0 || i%5 == 0) {
            sum +=i;
        }
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}
*/