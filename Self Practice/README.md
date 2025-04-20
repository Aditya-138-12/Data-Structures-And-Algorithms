- [x] 1. Given N and K, print those numbers from 1 to N where sum of digits is equal to K.

```
// Author Aditya Saroha
// Self Preacitce Problem

#include <iostream>
using namespace std;

// Given N and K, print those numbers from 1 to N, whose sum of digits is L.

int main() {
    
    int n, k;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Enter the value of K: ";
    cin >> k;
    int flag = 0;
    
    for(int number = 0; number < n; number++){
        int sum = 0;
        for(int rem = number; rem > 0; rem /= 10){
            sum = sum + (rem % 10);
        }
        if(sum == k){
            flag = 1;
            cout << "The sum of digits of number " << number << " is " << sum << endl;
        }
    }
    if(flag == 0){
        cout << "There are no Numbers from 1 to " << n << " whose sum of digits " << k << endl;
    }

    return 0;
}
```

---

- [x] 2. Write a program to find if a number N is a power of 2 or not?	-> In this bruteforce is a way, but if you know some maths then it would be O(1) using log of base 2

```
// Author Aditya Saroha
// Self Preacitce Problem

#include <iostream>
using namespace std;

// Write a program to find whether a number is a power of 2 or not.

int main() {

    int num;
    
    cout << "Enter the value of Num: ";
    cin >> num;
    int a = num;    // Just to keep the Value of num
    
    int flag = 0;
    
    while(num > 1){
        if(num % 2 == 1){
            flag = 1;
            break;
        }
        num /= 2;
    }
    if(num == 1){
         cout << a << " is power of 2" << endl;
    }else{
        cout << a << " is not a power of 2" << endl;
    }
    
    return 0;
}
```

