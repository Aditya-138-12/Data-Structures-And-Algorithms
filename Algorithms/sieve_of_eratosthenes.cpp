// Author: Aditya Saroha
// Sieve of Eratosthenes

#include <iostream>
using namespace std;

// Question: Print all the prime numbers till N.

int main() {
    int n;
    cout << "Enter the number N: ";
    cin >> n;
    
    // Initial setting of array.  ->   O(N)
    int arr[n + 1];
    for(int i = 2; i < n + 1; i++){
        arr[i] = 1;
    }
    
    // Main block, where all the primes are mearked in the array. ->   O(N*loglog(N))
    // This is the optimized Sieve of Eratosthenes.
    // We only iterate i from 2 to sqrt(N), because any composite number greater than sqrt(N)
    // will already be marked by its smaller prime factors.
    // For each prime i, we mark all multiples of i starting from i*i as non-prime 
    // But a more optimized version do exists, where the outer loops only run till suqare root of N, and the inner loop will start from i*i rather than 2*i.
    for(int i = 2; i*i <= n; i++){
        if(arr[i] == 1){
            for(int j = i*i; j <= n; j += i){
                arr[j] = 0;
            }
        }
    }
    
    // Finally print all the primes till N.  ->   O(N)
    cout << "All the prime numbers till " << n << " are " << endl;
    for(int i = 2; i <= n; i++){
        if(arr[i] == 1){
            cout << i << endl;
        }
    }

    return 0;
}
