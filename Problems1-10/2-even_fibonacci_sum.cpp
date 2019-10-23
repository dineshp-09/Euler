#include<iostream>

using namespace std;

// Iterative
void EvenFibonacciSum(long int num1, long int num2) {
    long int sum = 0, evenSum = 0;
    while (num1 < 4000000) {
        sum = num1 + num2;
        if (num1 % 2 == 0)
            evenSum += num1;
        num1 = num2;
        num2 = sum;
    }
    cout<<evenSum<<endl;
}

// Recursive
void EvenFibonacciSumRecursive(long int num1, long int num2, long int sum=0) {
    if (num1 % 2 == 0)
        sum += num1;
    if (num1 < 4000000)
        return EvenFibonacciSumRecursive(num2, (num1+num2), sum);
    cout<<sum<<endl;
}

int main() {
    EvenFibonacciSum(0, 1);
    EvenFibonacciSumRecursive(0, 1);
    return 0;
}

// Answer: 4613732
