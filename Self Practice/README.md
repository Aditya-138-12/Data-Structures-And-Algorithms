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

---

- [x] 3. Print the first N number whose sum of digits is equal to K.

```
// Author Aditya Saroha
// Self Practice Probelm
#include <iostream>
using namespace std;

// Print the first N numbers whose sum of digits is equal to K.

int main() {
    
    int n, k;
    
    cout << "Enter the Value of N: ";
    cin >> n;
    cout << "Enter the value of K: ";
    cin >> k;
    
    //int flag = 0;
    //int sum = 0;
    //for(int rem = k; rem > 0; rem /= 10){	// Here if you put rem > 1, then the numbers like 14 will give digit sum of 4, cuz the last iteration didn't happen.
    //    sum = sum + (rem % 10);
    //}
    
    //int mSum = sum;
    
    //while(n){
    //    for(int number = 1; number++;){
    //        sum = 0;
    //        for(int rem = number; rem > 0; rem /= 10){
    //            sum = sum + (rem % 10);
    //       }
    //        if(sum == mSum){
    //            cout << number << endl;
    //            n--;
    //        }else if(n < 1){
    //            break;
    //        }else{
    //            continue;
    //        }
    //    }
    //    break;
    //}

    int count = 0;  // If it would be 1 then we can put <= in while conditional
    int number = 1;
    while(count < n){
        int sum = 0;
        for(int rem = number; rem > 0; rem /= 10){
            sum += rem % 10;
        }
        if(sum == k){
            count ++;
            cout << number << endl;
        }
        number++;
    }

    return 0;
}
```

---

- [x] 4. Given a number N, print whether the number is prime or not.

```
// Author Aditya Saroha
// Self Practice Probelm
#include <iostream>
using namespace std;

// Check if a number is prime or not?

// Author Aditya Saroha
// Self Practice Probelm
#include <iostream>
using namespace std;

// Check if a number is prime or not?

int main() {
    
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    // int flag = 0;
    // if(n <= 1){
    //     flag = 2;
    //     cout << n << " Is not prime number" << endl;
    // }
    // int itr = 1;
    // int number = 1;
    // while(itr){
    //     if(n % number == 0){
    //         itr++;
    //     }
    //     if(itr > 3){
    //         flag = 1;
    //         break;
    //     }
    //     if(number >= n){
    //         break;
    //     }
    //     number++;
    // }
    // if(flag == 1){
    //     cout << n << " Is is not a prime number " << endl;
    // }else if(flag == 0){
    //     cout << n << " Is a prime number " << endl;
    // }
    
    // Alternate and very small way;
    // if(n <= 1){
    //     cout << n << " is not a prime number" << endl;
    // }else{
    // int factor_count = 1;
    // for(int i = 2; i <= n; i++){
    //     if(n % i == 0){
    //         factor_count++;
    //     }
    // }
    // if(factor_count == 2){
    //     cout << n << " is a prime number" << endl;
    // }else{
    //     cout << n << " is not a prime number" << endl;
    // } 
    // }
    
    // More Efficient way -> best one
    int flag = 0;
    if(n <= 1){
        cout << n << " is not a prime number" << endl;
    }else{
        int factor_count = 0;
        for(int i = 2; i < n - 1; i++){ // This make the TC O(n), to reduce it to o                                // (root(n)) we can just check till root(n)
                                        // like this i * i <= n
            if(n % i == 0){
                cout << n << " is not a prime number";
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << n << " is a prime number" << endl;
        }
    }
    
    return 0;
}
```

- [ ] 5. Print all the prime numbers in the range 1 to N.

```

```

- [x] 6. Print the Star pattern like this.
```
*****
*****
*****
*****
*****

// Author Aditya Saroha
// Self Practice problem
#include <iostream>
using namespace std;

// Pattern printing.

int main() {
    
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


```

```
*****
 *****
  *****
   *****
    *****
    
// Author Aditya Saroha
// Self Practice problem
#include <iostream>
using namespace std;

// Pattern printing.

int main() {
    
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int k = 1; k < i; k++){
            cout << " ";
        }
        for(int j = 1; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

    
```

---

- [x] 7. Print the HCF of 2 numbers.

```
// Author Aditya Saroha
// Self Practice problem
#include <iostream>
using namespace std;

// HCF of 2 numbers.

int main() {
    
    int num1, num2;
    cout << "Enter the value of Num1: ";
    cin >> num1;
    cout << "Enter the value of Num2: ";
    cin >> num2;
    
    for(int i = ((num1 > num2) ? (num2) : (num1)); i >= 1; i--){
        if((num1 % i == 0) && (num2 % i == 0)){
            cout << "The HCF of " << num1 << " and " << num2 << " is " << i << endl;
            break;
        }
    }
    
    return 0;
}

```

- [x] 8. Given a number a N, find all the perfect numbers from 1 to N.

```
// Author Aditya Saroha
// Self Practice Problem
#include <iostream>
using namespace std;

// Given a number N, calculate all the perfect numbers from 1 to N.
// A number is a perfect, if its all proper divisors sum is equal to the number itself, like for example lets us take 6, now firstly the proper divisors are also called as factors, so the factors of 6 are 1, 2, 3 -> and the sum of this is equal to is 6, hence 6 is a perfect number.

int main() {
    cout << "Enter the Number N: ";
    int n;
    cin >> n;
    
    for(int number = 1; number <= n; number++){
        int factorSum = 0;
        for(int i = 1; i <= number - 1; i++){
            if(number % i == 0){
                factorSum += i;
            }
        }
        if(factorSum == number){
            cout << "The number " << number << " is a perfect number " << endl;
        }
    }
    
    return 0;
}

```

- [x] 9. Print a Number Square Pattern.

```
// Author Aditya Saroha
// Self Practice Problem
#include <iostream>
using namespace std;

// Number square pattern.
// 12345
// 23456
// 34567
// 45678
// 56789

int main() {
    
    int rows_cnt;
    int cols_cnt;
    cout << "Print the Number of rows: ";
    cin >> rows_cnt;
    cout << "Print the Number of cols: ";
    cin >> cols_cnt;
    
    // for(int row = 1; row <= rows_cnt; row++){
    //     for(int col = 1; col <= cols_cnt; col++){
    //         cout << col + row - 1;
    //     }
    //     cout << endl;
    // }
    
    // Instead of above we can directly inject the additions in the for loop
    
    for(int i = 1; i <= rows_cnt; i++){
        for(int j = i; j <= cols_cnt + i - 1; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

```

- [x] 10. Print the Cross/X pattern.

```
// Author Aditya Saroha
// Self Practice Problem
#include <iostream>
using namespace std;
// Cross/X pattern.

int main() {
    
    int n;
    cout << "Enter the value of N: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i + j == n + 1){	// As always the diagonal elements ij sum will be either n+1 or i==j
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

```

- [x] 11. Print the Diamond Pattern.

```
// Author Aditya Saroha
// Self Practice Problem
#include <iostream>
using namespace std;

// Diamond pattern.
// n = 4
//      *
//     ***
//    *****
//   *******
//    *****
//     ***
//      *

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        int stars = (2*i) - 1;  // These are formulas and can be made on spot, by trial and error.
        int spaces = n - i;
        for(int k = spaces; k > 0; k--){
            cout << " ";
        }
        for(int j = stars; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 1; i <= n - 1; i++){
        int stars = (n-i)*2 - 1;    // These are formulas, and can be made on spot.
        int spaces = i;
        for(int j = spaces; j > 0; j--){
            cout << " ";
        }
        for(int k = stars; k > 0; k--){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl;
    cout << endl;
    cout << endl;
    
    
    // In a single loop.
    int stars = 1;
    int spaces = n - 1;
    
    for(int i = 1; i <= 2 * n - 1; i++){
        for(int k = spaces; k > 0; k--){
            cout << " ";
        }
        for(int j = stars; j > 0; j--){
            cout << "*";
        }
        cout << endl;
        if(i < n){  // Here if n = 4, and when i = 3, then the next iteration should increase the stars and spaces, then the i = 4, now the next itereation should reduce the number of stars and spaces, so that is why we have not kept i <= n, otherwise when i = 4, the iteration will again increase the stars and spaces, which will not print the diamon pattern.
            stars += 2;
            spaces--;
        }else{
            stars -= 2;
            spaces++;
        }
    }
    

    return 0;
}

```

