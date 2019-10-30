/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

using namespace std;

// greatest common divisor
long long int GCD (long long int a, long long int b) {
    while (a != 0) {
        long long int c = a;
        a = b % a;
        b = c;
    }
    return b;
}

// least common multiple
long long int LCM (long long int a, long long int b) {
    return a * (b / GCD(a, b));
}

int main() {
    long long int num = 20;
    long long int result = 1;
    for (long int i = 2; i <= num; i++)
        result = LCM(result, i);
    cout <<result<<endl;
    return 0;
}

// Answer: 232792560
