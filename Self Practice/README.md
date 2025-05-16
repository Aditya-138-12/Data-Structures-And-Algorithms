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

- [x] 5. Print all the prime numbers in the range 1 to N.

```
// Author: Aditya Saroha
// Self Practice Problem

#include <iostream>
using namespace std;

// Problem: Print all the prime numbers in the range 1 to N.

class testPrime{
public:
    static void check_prime(int n){
        int flag = 0;
        for(int i = 2; i < n - 1; i++){
            if(n % i == 0){
                cout << n << " is Not Prime." << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << n <<" is Prime." << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;
    
    if(n <= 1){
        cout << "Enter a larger number." << endl;
    }
    
    for(int i = 2; i < n; i++){
        testPrime::check_prime(i);
    }

    return 0;
}

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

- [x] 12. Print the 8 Pattern.

```
// Author Aditya Saroha
// Self Practice Problem
#include <iostream>
using namespace std;

// Print this 8 pattern
//    ***
//   *   *
//   *   *
//   *   *
//    ***
//   *   *
//   *   *
//   *   *
//    ***

int main() {
    
    int n;
    cout << "Enter the value of N: ";
    cin>>n;
    
    if(n < 5){
        cout << "N cannot be less than 5.";
        return 0;
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n/2 + 1 || i == n){   // Top, middle and bottom has ***
                if(j == 1 || j == n){   // First and last has space
                    cout << " ";
                }else{
                    cout << "*";
                }
            }else{
                if(j != 1 && j != n){   // First and last if not equal then it has space
                    cout << " ";
                }else{
                    cout << "*";    // Otherwise it is *
                }
            }
        }
        cout << endl;
    }
    

    return 0;
}

```

- [x] 13. Print the pattern of Isoceles Triangle.

```
// Author Aditya Saroha
// Self Practice Problem
#include <iostream>
using namespace std;

// Isoceles Triangle Pattern, n = 6
//      *
//     ***
//    *****
//   *******
//  *********
// ***********

int main() {
    
    int n;
    cout << "Enter the value of N: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        int spaces = n - i;
        int stars = 2*i-1;
        for(int j = spaces; j > 0; j--){
            cout << " ";
        }
        for(int j = stars; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}

```

- [x] 14. Find the range of a given array?

```
// Author Aditya Saroha
// Self Understanding
#include <iostream>
#include<algorithm>
using namespace std;

// Find the rang of the array. It means difference between the highest element and lowest element.

int main() {
    
    int n = 0;
    cout << "Enter the value of N: ";
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter the value of " << i << " element: ";
        cin >> arr[i];
    }
    
    int high = arr[0], low = arr[0];
    
    for(int i = 0; i < n; i++){
        if(arr[i] > high){
            high = arr[i];
        }
        if(arr[i] < low){
            low = arr[i];
        }
    }
    cout << "The highest element is " << high << " and the lowest element is " << low << endl;
    cout << "The Range of the array is: " << high - low << endl;
    

    return 0;
}
```
- [x] 15. Some syntactical sugar about the cpp classes.

```
// Author: Aditya Saroha
// Self practice problem
// Example of method overloading, if you use float by default it will give a type resolution error, as in cpp the default type is double instead of float, hence the erro.

// Exact error is here

// Here, 10.3 and 20.2 are of type double by default in C++. But you haven't overloaded provider for double — only for int and float.

// So, no exact match is found, and the compiler has to choose whether to convert double to float or int. This could lead to ambiguity or an implicit conversion (which might work, but isn't ideal).
// To resolve it for time being, you can either typecast the input parameters like this, test::addition(10.2f, 23.4f) << endl; , i.e. by using a 'f'.

#include <iostream>
using namespace std;

class test{
public:
    static int provider(int a, int b){
        int sum = addition(a, b);
        return sum;
    }
    
    static double provider(double a, double b){
        double sum = addition(a, b);
        return sum;
    }

private:
    static int addition(int a, int b){
        return a + b;
    }
    
    static double addition(double a, double b){
        return a + b;
    }
    
};  // Always put semi-colon after the class definition.

int main() {
    
    cout << "The sum is: " << test::provider(10.3, 20.2) << endl;

    return 0;
}

```

- [x] 16. Some sytantical sugar regarding the Templates!

```
// Author: Aditya Saroha
// Self practice problem
// Example of templates, now right now I donot undertand why do we still need method overloading instead of templates, but the work of templates is that instead a writing several overloads, we can write a generic code to represent the functionality of that class. 

#include <iostream>
using namespace std;

// Now definig the templates instead of method overloading.

class test{
public:
    template <typename T>
    static T provider(T a, T b){
        T sum = addition<T>(a, b);
        return sum;
    }

private:
    // A dyanmic setter kind function instead of method overloading.
    template <typename T>
    static T addition(T a, T b){
        return a + b;
    }
    
};  // Always put semi-colon after the class definition.

int main() {
    
    cout << "The sum is: " << test::provider<long double>(10.3, 20.2) << endl;

    return 0;
}

```

- [x] 17. Some pattern priting using the typecasting method.

```
// Author: Aditya Saroha
// Self Practice Problem

#include <iostream>
using namespace std;

// Pattern priting problem, using clever techniques -> i.e. typecasting.
// EDCBA
// EDCBA
// EDCBA
// EDCBA
// EDCBA

// int main() {
    
//     for(int i = 1; i <= 5; i++){
//         for(int j = 5; j >= 1; j--){
//             cout << (char)(64 + j);
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Pattern priting problem, using clever techniques -> i.e. typecasting.
// AAAAA
// EEEEE
// IIIII
// OOOOO
// UUUUU

int main(){
    int updation_char = 1;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cout << (char)(64 +  updation_char);
        }
        cout << endl;
        if(i > 2){
            updation_char += 6;
        }else{
            updation_char += 4;
        }
    }
}

```
