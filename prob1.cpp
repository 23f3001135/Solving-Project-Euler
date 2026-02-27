// Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream>

using namespace std;

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