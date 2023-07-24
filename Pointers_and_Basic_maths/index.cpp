#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
#include<string>
#include<cctype>
#include<cstring>
#include<algorithm>

using namespace std;


// Functions
// void solve(int arr[]) {
//     cout << "size of array in solve() function-: " << sizeof(arr) << endl;

//     cout << arr << endl;
//     cout << "value at index 0 -: "  << *arr << endl;
//     cout << &arr << endl;

//     arr[0] = 56;
// }


// void update(int* p) {
//     cout << "Address stored inside p is " << p << endl; 
//     cout << "Addres of p is " << &p << endl; 

//     *p = *p + 10;
// }


// bool isPrime(int n) {
//     if(n <= 1) return false;

//     int sqrtN = sqrt(n);
//     for(int i=2; i <= sqrtN; i++) {
//         if(n%i == 0) return false;
//     }
//     return true;
// }

// int countPrimeNumbers(int n) {
//     int c = 0;
//     for(int i=0; i<n; i++) {
//         if(isPrime(i)) c++;
//     }

//     return c;
// }



// // Sieve of Eratosthenes
// vector<bool> sieve(int n) {
//     vector<bool>sieve(n+1, true);
//     sieve[0] = sieve[1] = false;

//     for(int i=2; i<=sqrt(n); i++) {  //  Optimization 2-: since inner loop starts with j= i*i, if n = 25, means we have to prime below 25, so after i = 5 inner loop won't work as j=i*i and 6*6 > 25. So, we can either write i*i <= n or i <= sqrt(n)
//         if(sieve[i]) {

//             // int j = i*2;
//              int j = i*i;
// // (Read this, very important) Optimisation(1)-: first unmarked number woulde be i*i as other previous numbers have been marked from i*2 to i*(i-1)
       
//              while(j<=n) {
//                 sieve[j] = false;
//                 j += i;
//              }
//         }
//     }
    
//     return sieve;
// }



// vector<bool>segSieve(int L, int R) {
//     vector<bool>temp = sieve(sqrt(R)); // we are passing n = sqrt(R) in sieve() function, because in inner loop of this function we set j = i*i, so i*i < R
//     vector<int>basePrime;

//     for(int i=0; i<temp.size(); i++) {
//         if(temp[i]) basePrime.push_back(i);        
         
//     }

//     vector<bool>segSieve(R-L+1, true);
//     if(L == 0 || L == 1) segSieve[L] = false;

//     for(auto prime: basePrime) {
//         int first_mul = (L / prime) * prime;

//         if(first_mul < L) first_mul += prime;

//         int j = max(first_mul, prime*prime);
//         while(j <= R) {
//             segSieve[j - L] = false;
//             j += prime;
//         }
//     }

//     return segSieve;
// }








vector<bool> sieve(int n) {
    vector<bool>sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i=2; i<=sqrt(n); i++) {  
        if(sieve[i]) {
                int j = i*i;
                while(j<=n) {
                sieve[j] = false;
                j += i;
                }
        }
    }
    return sieve;
}

vector<bool> segSieve(int L, int R){
    vector<bool>Sieve = sieve(sqrt(R));
    vector<long long> basePrimes;

    for(int i=0; i<Sieve.size(); i++) {
        if(Sieve[i]) basePrimes.push_back(i);
    }

    vector<bool>segSieve(R-L+1, true);
    if(L == 1) segSieve[0] = false;

    for(auto prime: basePrimes) {
        long long first_mul = (L/prime) * prime;
        if(first_mul < L) first_mul += prime;

        for(long long j = max(first_mul, prime*prime); j<=R; j+=prime) {
            // cout << "j-: " << j << "  j-L-: " << j-L << endl;
            segSieve[j-L] = false;
        }
        // cout << endl;
    }

    // for(auto x: segSieve) cout << x << " ";
    // cout << endl;
    return segSieve;
}









// int findGCD(int a,int b) {
//     if(a==0) return b;
//     if(b==0) return a;

//     while(a>0 && b>0) {
//         if(a>b) a = a-b;
//         else b = b-a;
//     }

//     return (a==0 ? b : a);
// }


// int findLCM(int a, int b) {
//     return (a*b)/findGCD(a,b);
// }



// int fastExponentiation(int a, int b) {
//     int ans = 1;

//     while(b > 0) {
//         if(b & 1) {
//             // if b is odd
//             ans = ans * a;
//         }
//         a = a*a;
//         b >>= 1; // or b = b/2 
//     }
//     return ans;
// }


// int superPow(int a, vector<int>arr) {
//     // from Euler theorem we use ETF(n), and ETF(1337) = 1140
//     long long b = 0;
//     for(auto x: arr) b = (b*10 + x) % 1140;



//     int ans = 1;
//     while(b > 0) {
//         if(b & 1) {
//             // if b is odd
//             ans = (ans % 1337)*1LL*(a % 1337); // 1LL converts int type to long long type
//         }
//         a = (a % 1337)*1LL*(a % 1337);
//         b >>= 1;
//     }

//     return ans%1337;
// }




int main() {

// // pointers basics
// int a = 10;
// int* ptr = &a;

// cout << ptr << endl;
// cout << &ptr << endl; // address in memory of ptr pointer variable
// cout << a << endl;
// cout << &a << endl;
// cout << *ptr << endl; // value at address stored in "ptr"



// // copying a pointer
// int* copyPointer = ptr;
// cout << "copy-: " << copyPointer << endl;
// cout << *copyPointer << endl;
// cout << &copyPointer << endl;



// // Pointers with array
// int arr[4] = {12,44,67,89};
// int* ptr = arr; // or int* ptr = &arr;

// cout << arr << endl;
// cout << &arr << endl;
// cout << &arr[0] << endl;
// cout << ptr << endl;
// cout << &ptr << endl;
// cout << *arr << endl;
// cout << *(arr+1) << endl;



// // Pointers for char Array
// char name[6] = "Parth";
// char* c = &name[0];


// cout << c << endl;
// cout << *c << endl;
// cout << name+3 << endl;
// cout << *(name+3)  << endl;
// cout << &c << endl;
// cout << *(c+1) << endl;
// cout << c+1 << endl;





// Pointers with functions-:
// int arr[10] = {1,2,3,4};

// cout << arr <<  endl;
// cout << &arr <<  endl;

// cout << "size of array in main() function-: " << sizeof(arr) << endl;

// for(int i=0; i<10; i++) {
//    cout << arr[i] << " "; 
// }
// cout << endl;


// solve(arr);

// for(int i=0; i<10; i++) {
//    cout << arr[i] << " "; 
// }
// cout << endl;



// int a = 5;

// cout << "Address of a is " << &a << endl;
// int *ptr = &a;
// cout << "Address stored inside ptr is " << ptr << endl;
// cout << "Address of ptr is " << &ptr << endl;

// update(ptr);
// cout << "value of a is " << a << endl;




//////////////////////////////////////////
/////////////////////////////////////////
// Basic Maths

// // prime number
// int n = 10;
// cout << countPrimeNumbers(n);



// // (Imp.) Prime numbers using Sieve of Eratosthenes Algorithm
// int n = 25;
// vector<bool>Sieve = sieve(n);

// for(int i=0; i<Sieve.size(); i++) {
//     if(Sieve[i]) cout << i <<" ";
// }



// (V.Imp) Prime numbers using segmented sieve
long long L = 1, R = 10;
vector<bool>temp = segSieve(L,R);

// segSieve(L, R);
for(int i=0; i<temp.size(); i++) {
    if(temp[i]) cout << i+L << " ";
}






// // H.C.F(G.C.D) using euclid algorithm
// int a = 72;
// int b = 24;
 
// cout << findGCD(a,b); 



// // L.C.M using euclid algorithm
// int a = 72;
// int b = 24;
 
// cout << findLCM(a,b); 



// // fast exponentiation (Imp.)
// int a = 10;
// int b = 3;

// cout << fastExponentiation(a,b);



// // super pow (leetcode)
// int a = 2;
// vector<int> arr = {1,0};

// cout << superPow(a, arr);




// // Pointers imp Doubt
// int arr[10] = {0};
// int (*ptr)[10] = &arr;

// cout << &arr << endl << endl;
// cout << &arr + 1 << endl;

// cout << ptr+1 << endl << &arr[1] << endl;



// for(int i=0; i<10; i++) {
//     // cout << *ptr[i] << endl;
//     cout << (*ptr)[i] << endl; // the parantheses around *ptr are necessary because the dereference operator "*" has a lower precedence than the array subscript operator "[]" 
// }

    return 0;
}
