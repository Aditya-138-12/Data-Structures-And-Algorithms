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

- [x] 18. Determine whether a number is palindrome or not.

```
// Author: Aditya Saroha
// Self Practice

#include <iostream>
using namespace std;

// Problem: Tell whether a number is a palindrome or not.

int main() {
    int n;
    int reverse_digit = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    for(int i = n; i > 0; i /= 10){     // i > 1 condition fails for 11, 1121, cuz in this in the first iteration 11 -> divided by 10 becomes 1, now as the condition states i > 1, so it will come out of the loop and hence this will give a output of not Palindrome, which is not we want, so hence we should use i > 0.
        reverse_digit = (reverse_digit * 10) + (i % 10);
    }
    
    if(reverse_digit == n){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

```

- [x] 19. Write a program to check whether a number is tech or not.

```
// Author: Aditya Saroha
// Self Practice

#include <iostream>
#include <cmath>
using namespace std;

// Write a c++/cpp program to check whether the given number is `tech` or not.


// A tech number is a number which when taken 2 digits at a time, and then added and then squared, equals the same number.
// 2025
//  |
// 20 & 25 (Now add them)
//  45 (now sqare it)
//  45**2
//  2025

// More formal definition
// A tech number is a number that has an even number of digits. When split into two equal halves, the sum of these halves, when squared, equals the original number. For example, 3025 is a tech number because (30 + 25)² = 55² = 3025

int main() {
    int n;
    int main_number = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    for(int i = n; i > 0; i /= 100){    // Also dividing by 100 will give 2 digits at a time.
        main_number = main_number + (i % 100);
    }
    
    if(pow(main_number, 2) == n){
        cout << "Tech" << endl;
    }else{
        cout << "Not Tech" << endl;
    }

    return 0;
}

```

- [x] 20. Write a cpp program to determine whether a number is Ramaanujam Number or not.

```
// Author: Aditya Saroha
// Self Practice Problems
#include <iostream>
using namespace std;

// Write a c++/cpp program to check whether the given number is RamaAnujam or not.

// 1729
// 1 + 7 + 2 + 9
// 19
// Now take reverse of 19 -> 91
// Now multiply 19 and 91
// 19*91 = 1729

int main() {
    int n;
    int sum_of_digits = 0;
    int reverse_number = 0;
    
    cout << "Enter a number: ";
    cin >> n;
    
    for(int i = n; i > 0; i /= 10){
        sum_of_digits = sum_of_digits + (i % 10);
    }
    
    for(int i = sum_of_digits; i > 0; i /= 10){
        reverse_number = (reverse_number * 10) + (i % 10);
    }
    
    if(sum_of_digits * reverse_number == n){
        cout << "Ramaanujam Number" << endl;
    }else{
        cout << "Not Ramaanujam Number" << endl;
    }

    return 0;
}

```

- [x] 21. Wrtie a cpp program to determine whether a number is Adam's number or not.

```
// Author: Aditya Saroha
// Self Practice Problems
#include <iostream>
#include <cmath>
using namespace std;

// Write a cpp program determine whether a number is Adam's number or not.

// If we have 12, then square of 12 is 144
// Now reverse of 12 is 21, and square of 21 is 441, and reverse of 441 is 144, 
// Hence these are equal, so the number 12 is Adam's number.


int main() {
    int n;
    int sq_1 = 0;
    int rev_n = 0;
    int sq_rev_n = 0;
    int rev_sq_rev_n = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    sq_1 = pow(n, 2);
    
    for(int i = n; i > 0; i /= 10){
        rev_n = (rev_n * 10) + (i % 10);
    }
    
    sq_rev_n = pow(rev_n, 2);
    
    for(int i = sq_rev_n; i > 0; i /= 10){
        rev_sq_rev_n = (rev_sq_rev_n * 10) + (i % 10);
    }
    
    if(rev_sq_rev_n == sq_1){
        cout << "Adam's Number" << endl;
    }else{
        cout << "Not Adam's Number" << endl;
    }

    return 0;
    
}

```

- [x] 22. Determine a number is Twisted Prime or not.

```
// Author: Aditya Saroha
// Self Practice Problems

#include <iostream>
using namespace std;

// Question: Write a cpp program to check whether a given number is Twisted Prime or not?

// Twisted Prime -> If the given number and its reverse are both prime then we can say that the number is prime.

class check_prime{
public:
    static int prime(int n){
        int flag = 0;
        for(int i = 2; i < n - 1; i++){
            if((n % i) == 0){
                flag = 1;
                break;
            }
        }
        return ((flag == 1) ? (1) : (0));
    }
};

int main() {
    
    int n;
    int rev_n = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    if(n <= 1){
        cout << "Enter a bigger number." << endl;
    }
    
    for(int i = n; i > 0; i /= 10){
        rev_n = (rev_n * 10) + (i % 10);
    }
    
    int check_n_prime = check_prime::prime(n);
    int check_rev_n_prime = check_prime::prime(rev_n);
    
    if(check_n_prime == 1 || check_rev_n_prime == 1){
        cout << "Not Twisted Prime" << endl;
    }else{
        cout << "Twisted Prime" << endl;
    }

    return 0;
    
}

```

- [x] 23. Determine whether a number is Palindrome Prime or not.

```
// Author: Aditya Saroha
// Self Practice Problems

#include <iostream>
using namespace std;

// Question: Write a cpp program to check whether a number is palindrome prime or not?

// Palindrome Prime, if a given number is both palindrome and prime at the same time then the number is called as Palindrome Prime.

class palindrome_prime{
public:

    static int check_palindrome(int n){
        int reverse_n = 0;
        for(int i = n; i > 0; i /= 10){
            reverse_n = (reverse_n * 10) + (i % 10);
        }
        return ((reverse_n == n) ? (0) : (1));  // If palindrome then return 0, otherwise 1.
    }
    
    static int check_prime(int n){
        int flag = 0;
        for(int i = 2; i < n - 1; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
        return ((flag == 1) ? (1) : (0));
    }
    
};

int main() {
    
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if(n <= 1){
        cout << "Enter a bigger number. " << endl;
        return 0;
    }
    
    int check_n_palindrome = palindrome_prime::check_palindrome(n);
    int check_n_prime = palindrome_prime::check_prime(n);
    
    if(check_n_palindrome == 1 || check_n_prime == 1){
        cout << "Not Palindrome Prime" << endl;
    }else{
        cout << "Palindrome Prime" << endl;
    }
    
    return 0;
}

```

- [x] 24. Determine whether a number is Powerfull or not.

```
// Author: Aditya Saroha
// Self Practice Problems

#include <iostream>
#include <cmath>
using namespace std;

// Question: Write a cpp program to check whether a given number is powerfull or not.

// 36 is powerfull, cuz the prime factors of it are 2 and 3, the square of these prime factors, is 4 and 9, and their multiplication is 36.

class check_prime{
public:
    static int prime(int n){
        if(n <= 1){
            return 0;
        }
        int flag = 0;
        for(int i = 2; i < n - 1; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
        return ((flag == 1) ? (0) : (1));
    }
};

int main() {
    int n;
    int computed_number = 1;
    cout << "Enter a Number: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        if((n % i == 0) && (check_prime::prime(i))){
            //cout << "This is one of the factors:  " << i << endl;
            computed_number = computed_number * pow(i, 2);
            //cout << "This is the computed Number: " << computed_number << endl;
        }
    }
    
    if(computed_number == n){
        cout << "Powerfull Number" << endl;
    }else{
        cout << "Not Powerfull Number" << endl;
        cout << computed_number << endl;
    }
    
    return 0;
}

```

- [x] 25. A cool pattern priting problem.

```
// Author: Aditya Saroha
// Self Practice Problem

#include <iostream>
using namespace std;

// Question: Pattern Priting.
// Aa 
// Bb Bb 
// Bb Bb 
// Cc Cc Cc 
// Cc Cc Cc 
// Cc Cc Cc 
// Dd Dd Dd Dd 
// Dd Dd Dd Dd 
// Dd Dd Dd Dd 
// Dd Dd Dd Dd 

// Also used here typecasting concept.

int main() {
    
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            for(int k = 1; k <= i; k++){
                cout << (char)(64 + i) << (char)(96 + i) << " ";
        }
            cout << endl;
        }
    }
    
    return 0;
}

```

- [x] 26. Print all the divisors of a number in any order.

```
// Author: Aditya Saroha
// Self Practice Problem

#include <iostream>
using namespace std;

// Print all the divisors of a number, in any order with optimized time complexity.

int main() {
    int n;
    cout << "Enter a number to print its divisors: ";
    cin >> n;
    
    // TC is O(N), gotta reduce it.
    //
    // for(int i = 1; i <= n; i++){
    //     if(n % i == 0){
    //         cout << i << endl;
    //     }
    // }
    
    // More optimized solution. TC is O(sqrt(N)).
    // Basic intution is, for a number let us say, 36, we donot need to go till 36 to find all the divisors, for 1, we have 1x36 = 36, for 2 we have 2x18 = 36, so how do we get the 18, by doing n/i !! Hence the intution.
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
            if(n/i != i){   // This is to handle the edge cases, like 6x6 = 36, and 7x7 = 49, so to avoid priting them twice.
                cout << n/i << endl;
            }
        }
    }

    return 0;
}

```
