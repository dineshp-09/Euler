/*
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<iostream>

using namespace std;

void SumSquare(long int num) {
    long int sum = 0;
    long int sumSquare = 0;
    long int squareSum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
        sumSquare += i * i;
    }
    squareSum = sum * sum;
    cout<<squareSum - sumSquare<<endl;
}

int main() {
    SumSquare(100);
    return 0;
}

// Answer: 25164150
