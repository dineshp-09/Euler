#include<iostream>
#include<vector>

using namespace std;

void PrimeNumber(long int num) {
    vector<long int> prime(1, 2);
    for (long int i = 2; prime.size() <= num; i++) {
        bool isPrime = true;
        for (long int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            prime.push_back(i);
        }
    }
    cout<<prime[num]<<endl;
}

int main() {
    PrimeNumber(10001);
    return 0;
}

// Answer: 104743
