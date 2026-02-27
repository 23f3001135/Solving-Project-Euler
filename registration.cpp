// Among the first 344 thousand square numbers, what is the sum of all the odd squares?

// solution 2:
// find first 344k odd numbers squre them and sum them. Use multithreading to speed up and breakdown task.

// solution 1:
// 8 threads calculating sum for 1/8 of total n.
// each thread will check if number is a odd? if so check if it's perfect squre? if not continue if so add it to a sum.
// at the end sum value returned by sum from each thread will be summed to find the final value.


#include <iostream>
#include <cmath>


using namespace std;

int main() {
    unsigned long long final=0;
    
    
    int n = 344000;
    for (int i=1; i<=n; i+=2) {
        // cout<<"i is"<<endl;
        // cout<<i<<endl;
        final+=pow(i, 2.0);
        // cout<<"final is"<<endl;
        // cout<<final<<endl;
    }
    cout<<final;

    return 0;
}

