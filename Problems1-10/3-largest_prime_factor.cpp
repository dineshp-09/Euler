/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

using namespace std;

void PrimeFactor(long long int num) {
    for (long int i = 1; i < num; i++) {
        if (num % i == 0)
            num = num / i;
    }
    cout<<num<<endl;
}

int main() {
    PrimeFactor(600851475143);
    return 0;
}

// Answer: 6857
