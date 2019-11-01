/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include<iostream>

using namespace std;

void PrimeNumber(int num) {
    int count = 1;
    //even numbers are omitted because all the prime numbers are odd
    for (int i = 3; count < num; i+=2) {
        for (int j = 3; j <= i; j+=2) {
            if(i % j == 0) {
                if (i == j) {
                    count++;
                    if (count == num)
                        cout<<i<<endl;
                }
                break;
            }
        }
    }
}

int main() {
    PrimeNumber(10001);
    return 0;
}

// Answer: 104743
