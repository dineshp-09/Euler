/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<iostream>

using namespace std;

bool IsPalindrome(int numToCheck) {
    int reverseNumber = 0, remainder;
    int originalNumber = numToCheck;
    while (numToCheck > 0) {
        remainder = numToCheck % 10;
        reverseNumber = reverseNumber*10 + remainder;
        numToCheck = numToCheck / 10;
    }
    if (originalNumber == reverseNumber)
        return true;
    else
        return false;
}

void LargestPalindrome() {
    long int num = 0, max = 100 * 100;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            num = i*j;
            bool checkResult = IsPalindrome(num);
            if (checkResult && num > max) {
                max = num;
                break;
            }
        }
    }
    cout<<max<<endl;
}

int main() {
    LargestPalindrome();
    return 0;
}

// Answer: 906609
