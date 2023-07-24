#include <iostream>
using namespace std;
#include <cmath>
#include <climits>


// // Functions-:

// Decimal to binary
//     // Divison method
// int decimalToBinary(int n) {
//     int binaryNo = 0; 
//     int i=0;

//     while(n>0) {
//     int bit = n % 2;
//     binaryNo = bit*pow(10, i++) + binaryNo; 
//     n = n/2;
//     }
//     return binaryNo;
// } 


    // Bitwise method
// int decimalToBinary2(int n) {
//     int binaryNo = 0; 
//     int i=0;

//     while(n>0) {
//     int bit = (n & 1);
//     binaryNo = bit*pow(10, i++) + binaryNo; 
//     n = n >> 1;
//     }
//     return binaryNo;
// } 



// binary to decimal
// int binarToDecimal(int n) {
//     int i = 0;
//     int decimalNo = 0; 

//     while(n>0) {
//     int bit = n%10;
//     decimalNo = bit*pow(2, i++) + decimalNo;
//     n /= 10;
//     }

//     return decimalNo;
// }


// int findMax(int num1, int num2, int num3) {
//     if(num1 > num2 && num1 > num3) {
//         return num1;
//     }
//     else if  (num2 > num1 && num2 > num3) {
//         return num2;
//     }
//     else {
//         return num3;
//     }
// }

// // Print 1 to n
// void print(int n) {
//     for(int i=1; i<=n; i++) {
//         cout << i << " ";
//     }
// }

// // Grading system
// char grades(int marks) {
//     if(marks>=90) return 'A';
//     else if(marks>=80) return 'B';
//     else if(marks>=70) return 'C';
//     else if(marks>=60) return 'D';
//     else return 'E';
// }


// int sumEven(int n) {
//     int sum=0;
//     for(int i=2; i<=n; i=i+2) {
//        sum+=i;
//     }
//         return sum;
// }


// double circleArea(int r) {
//     return 3.14*pow(r,2);
// }

// void evenOdd(int n) {
//     if(n%2==0) cout << "even";
//     else cout << "odd";
// }j  

// int factorial(int n) {
//     int fact = 1;
//     for(int i=n; i>=1; i--) {
//         fact *= i;
//     }
//     return fact;
// }

// bool checkPrime(int n) {
//     for(int i=2; i<=n/2; i++) {
//         if(n%i == 0) return false;
//     }
//     return true;
// }

// void printPrimeUptoN(int n) {
//     for(int i=2; i<=n; i++) {
//         int isPrime = 0;
//         for(int j=2; j<i; j++) {
//             if(i%j==0){
//                 isPrime = 1;
//                 break;                
//             }
//         }
//         if(isPrime == 0) cout << i << endl;
//     }
// }


// int printDigitsInteger(int n) {
//     int ans = 0;
//     bool isNeg = false;
//     if(n <= INT_MIN) return 0; // => because in case of a -ve no. we are doing n = -n and INT_MIN = -2147483648 and INT_MAX = 2147483647, so -(-2147483648)  = 2147483648 which is greater then INT_MAX


//     if(n<0) {
//         isNeg = true;
//         n = -n;
//     }

//     while(n > 0) {
//         if(n > INT_MAX / 10) return 0; // we are checking for INT_MAX/10 for safety, let's say if we had 214748365 in the 2nd last iteration and the last digit(rem) is 0 then we know 2147483650 > 2147483647
//         int rem = n%10;
//         ans = ans*10 + rem;
//         n /= 10;
//     }
//     return isNeg ? -ans : ans;
// }

// void setKthBit(int n, int k) {
//     int value = 1 << k;
//     int newBinary = n | value;
//     cout << newBinary; 
// }


// void printDigits(int n) {
//     while(n != 0) {
//         int rem = n%10;
//         n=n/10;
//         cout << rem << " ";
//     }
// }

void findSetBits(int n) {
    int ans = 0;
    while(n!=0) {
        if(n & 1) ans++;

        n = n>>1;        
    }

    cout << "No. of set bits = " << ans;
}

// // Note=> above 2 programs might not work in this laptop accurately because of size of int
int main() {
    // int n;
    // cin >> n;
    // int decimal = binarToDecimal(n);
    // cout << decimal;

    // int n;
    // cin >> n;
    // int decimal = binarToDecimal2(n);
    // cout << decimal;

    // left shift
    // int a = 12;
    // int a = -12;
    // a=a<<1;
    // int a = 7;
    // a = a<<-1; 
    // cout << a;

//    // find max of 3 numbers
//     int a,b,c;
//     cin >> a >> b >> c;

//     int max = findMax(a,b,c);
    
//     cout << max;

// // Print 1 to n
// int n;
// cin >> n;

// print(n);


// // Grade system
// int marks;
// cout << "Enter the marks-: ";
// cin >> marks;

// cout << "grade-:" <<  grades(marks);



// // Sum of even no. upto N
// int n;
// cin >> n;

// cout << "Even Sum is-: "  << sumEven(n);

// // area of circle
// int r;
// cin >> r;
// cout << "area of circle-: " << circleArea(r);


// // print all prime from 1 to n
// int n;
// cin >> n;

// printPrimeUptoN(n);


// // find even odd
// int n;
// cin >> n;
// evenOdd(n);


// // // factorial
// int n;
// cin >> n;

// cout << "Factorial-: " << factorial(n);

// // check prime no.
// int n;
// cin >> n;

// if(checkPrime(n)) cout << "Prime";
// else cout << "not prime!";



// // Print all digits in an integer
// int n;
// cin >> n;

// printDigitsInteger(n);


// // Set Kth Bit
// int n,k;
// cin >> n >> k;
// setKthBit(n,k);


// // Print digits of an integer
// int n;
// cin >> n;
// printDigits(n);

// Find number of set bits(1) in a integer
int n;
cin >> n;
findSetBits(n);



return 0;


}

