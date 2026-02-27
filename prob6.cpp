// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

// solution
// step 1: find both sum of 100 numbers calling it sum and 
// sum of sq first hundred number calling it sumsq. squre the sum and diff it from sumsq
// 

#include <iostream>
using namespace std;

int main() {
    long long sum = 0, sumsq =0;
    for (int i =1; i <=100; i++) {
        sum +=i;
        sumsq+= i*i;
    }

    cout << (sum*sum) - sumsq << endl;

}
