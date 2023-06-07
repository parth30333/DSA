#include<iostream>
using namespace std;
int main() {

    // int score;
    // cout << "Enter the score " << endl;
    // cin >> score;
    // if(score  < 300) {
    //     cout << "india wins!" << endl; 
    // }
    // else { cout << "Pak wins!" << endl;
    // }


    // for(int i=5; (i>=5 && i<=10); i++) {
    //     cout << i << endl;
    // }

    // int i=0;
    // for(; ; ) {
    //     if(i < 5) {
    //         cout << i << endl;
    //         i++;
    //     }
    // }

    // int i;
    // if(cin >> i) {
    //     cout << "parth";
    // }

    // if(cout << "parth\n") {
    //     cout << "chauhan";
    // }

    // int n;
    // cin >> n;



// // Patterns

// // Square/ Rectangle

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < n; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


 // // Hollow Rectangle
    // int rowCount, colCount;
    // cin >> rowCount;
    // cin >> colCount;

    // for(int row =0; row < rowCount; row++) {
    //     if(row == 0 || row == rowCount-1) {
    //         for(int col=0; col<colCount; col++) {
    //             cout << "* ";
    //         }
    //     }
    //         else {
    //             cout << "* ";
    //             for(int i=0; i<colCount-2; i++) {
    //                 cout << "  ";
    //             }
    //             cout << "* ";
    //         }
    //         cout << endl;
    // }


// // Hollow Square
// int n;
// cin >> n; 

// for(int i=0; i<n; i++) {
//     for(int j=0; j<n; j++) {
//         if(i==0 || i==n-1 || j==0 || j==n-1) {
//             cout << "* ";
//         }

//         else {
//             cout << "  ";
//         }
//     }    
//     cout << endl;
// }    

// // half pyramid => col = row+1 
//     int rowCount;
//     cin >> rowCount;

//     for(int row=0; row<rowCount; row++) {
//         for(int col=0; col < row+1; col++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }


// // Inverted half-pyramid =>  row = col-1 
// int n;
// cin >> n;

// for(int row=0; row<n; row++) {
//     for(int col=0; col < n-row; col++) {
//         cout << "* ";
//     }
//     cout << endl;
// }


// // Numeric half pyramid
// int n;
// cin >> n;

// for(int row=0; row < n; row++) {
//     for(int col=0; col < row+1; col++) {
//         cout << col+1 ;
//         cout << " ";
//     }
//     cout << endl;
// }


// // Numeric Inverted half pyramid
// int n;
// cin >> n;
// for(int row=0; row<n; row++) {
//     for(int col=0; col<n-row; col++) {
//         cout << col+1;
//         cout << " ";
//     }
//     cout << endl;
// }

// // Full Pyramid
// int n;
// cin >> n;


// for(int i=0; i<n; i++) {
//     int k=0;
//     for(int j=0; j < (2*n)-1; j++) {
//         if(j < n-i-1) {
//             cout << "  ";
//         }
//         else if(k < (2*i)+1) {
//             cout << "* ";
//             k++;
//         }
//         else {
//             cout << "  ";
//         }
//         }
//         cout << endl;
//     }

// // Alternate for full pyramid
// int n;
// cin >> n;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << " ";
//     }
//     if(i==0 || i==n-1) {
//         for(int j=0; j<i+1; j++) {
//         cout << "* ";
//         }
//     }

//     else {
//         // cout << "*";
//         for(int j=0; j<i+1; j++) {
//             cout << "* ";
//         }   
//         // cout << "*";
//     }
// cout << endl;
// }

// // Inverted Full Pyramid
// int n;
// cin >> n;

// for(int row=0; row<n; row++) {
//     for(int col=0; col<row; col++) {
//         cout << " ";
//     }
//     for(int i=0; i < n-row; i++) {
//         cout << "* "; 
//     }
//     cout << endl;
// }


// float l,b,p;
// p= 2*(l+b);
// printf("perimeter%f", p);


// // prime no.
// int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;



// // inverted hollow numeric triangle
// int n;
// cin >> n;
// for(int i=0; i<n; i++) {
//     for(int j=i+1; j<=n; j++) {
//         if(j== i+1 || j==n || i==0) {
//             cout << j;
//             cout << " ";
//         }
//         else {
//             cout << "  ";
//         }
//     }
//     cout << endl;
// }


// int n;
// cin >> n;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++ ){
//         cout << " ";      
//     }
//     for(int k=0; k<i+1; k++) {
//         cout << "* ";
//     }
//     cout << endl;
// }


//   int n;
//   cin>>n;
//   for(int i=1; i<n; i++) {
//     for(int j=1; j<=n-i; j++) {
//         cout << "  ";
//     }

//     for(int j=i; j<2*i; j++) {
//         printf("%d", j);
//         cout << " ";
//     }

//     int ele = 2*(i-1);
//     for(int j=1; j<i; j++){ 
//         printf("%d", ele--);
//         cout << " ";
//     }
//     cout << endl;
//   }


// // Hollow inverted half pyramid
// int n;
// cin >> n;

// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         if(i==0 || j==0 || j==n-i-1) {
//         cout << "* ";
//     }
//     else {
//         cout << "  ";
//     }
// }  
//     cout << endl;
// }

// // Hollow full pyramid
// int n;
// cin >> n;

// for(int i=0; i<n; i++){
//     int k=0;
//     for(int j=0; j<(2*n)-1; j++) {
//         if(j<n-i-1) {
//             cout << " ";
//         }
//         else if(k<(2*i)+1) {
//             if(k==0 || k==2*i || i==n-1) cout << "*";
//             else cout << " ";
//             k++;
//         }
//         else {
//             cout << " ";
//         }
//     }
//     cout << endl;
// }


// // Alternate for hollow full pyramid
// int n;
// cin >> n;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << " ";
//     }
//     if(i==0 || i==n-1) {
//         for(int j=0; j<i+1; j++) {
//         cout << "* ";
//         }
//     }

//     else {
//         cout << "*";
//         for(int j=0; j<2*i-1; j++) {
//             cout << " ";
//         }   
//         cout << "*";
//     }
// cout << endl;
// }


// // Solid diamond
// int n;
// cin >> n;

// for(int row=0; row<n; row++) {
  
//   if(row <= n/2) {
//         for(int col=0; col<n-row-1; col++) {
//             cout << " ";
//         }
//         for(int col=0; col<row+1; col++) {
//             cout << "* ";
//         }
//         cout << endl;
    
//   } 
    
//     else {
//     for(int col=0; col<row; col++) {
//         cout << " ";
//     }
//     for(int col=0; col < n-row; col++) {
//         cout << "* "; 
//     }
//     cout << endl;
//     }
// }


// // Hollow Diamond
// int n;
// cin >> n;

// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i-1; j++) {
//         cout << " ";
//     }

//     for(int j=0; j<(2*i)+1; j++) {  // 2*i+1 because every row has no. of characters like this 1,3(*,space,*),5,7 
//         if(j==0 || j==2*i) {
//             cout << "*";
//         }
//         else {
//             cout << " ";
//         }
//     }
//     cout << endl; 
// }

// for(int i=0; i<n; i++) {
//     for(int j=0; j<i; j++)  {
//         cout << " ";
//     }

//     for(int j=0; j< (2*(n-i))-1; j++) {
//         if(j==0 || j== (2*(n-i))-2) {
//             cout << "*";       
//             }
//             else {
//                 cout << " ";
//             }
//     }
//     cout << endl;
// }


// // hollow diamond alternate
// int n;
// cin >>n;

// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i-1; j++) {
//         cout << " ";
//     }

//     for(int j=0; j<i+1; j++) {
//         if(j==0 || j==i) cout << "* ";
//         else cout << "  ";
//     }
//     cout << endl;
// }

// for(int i=0; i<n; i++) {
//     int count=n-i-1;
//     for(int j=0; j<i; j++) {
//         cout << " ";
//     }

//     for(int j=0; j<n-i; j++) {
//         if(j==0 || j==count) cout << "* ";
//         else cout << "  ";
//     }
//     cout << endl;
// }


// // Flipped solid diamond
// int n;
// cin >> n;

// for(int i=0; i<n; i++) {
//     // Inverted half pyramid
//     for(int j=0; j<n-i; j++) {
//         cout << "*";
//     }

//     // spaces
//     for(int j=0; j<(2*i)+1; j++) {
//         cout << " ";
//     }

//     // Inverted half pyramid
//     for(int j=0; j<n-i; j++) {
//         cout << "*";
//     }
//     cout << endl;
// }

// // 2nd half of figure
// for(int i=0; i<n; i++) {

//     // half pyramid
//     for(int j=0; j<i+1; j++) {
//         cout << "*";
//     }

//     // spaces
//     for(int j=0; j< (2*(n-i))-1; j++) {
//         cout << " ";
//     }

//     // half pyramid
//     for(int j=0; j<i+1; j++) {
//         cout << "*";    
//     }
//     cout << endl;
// }


// // fancy pattern
// int n;
// cin >> n;

// for(int row=0; row<n; row++) {
//     for(int col=0; col<row+1; col++) {
//         if(col==row) 
//             cout << row+1;
//         else 
//             cout << row+1 << "*";
//     }
//     cout << endl;
// }

// for(int row=0; row<n; row++) {
//     for(int col=0; col<n-row; col++) {
//         if(col==n-row-1) 
//             cout << n-row;
//         else 
//             cout << n-row << "*";
//     }
//     cout << endl;
//     }

// // Alphabet palindrome pyramid
// int n;
// cin >> n;

// for(int row=0; row<n; row++) {
//     int col;
//     for(col=0; col<row+1; col++) {
//         int ans = col+1;
//         char ch = ans + 'A' - 1;
//         cout << ch;
//     }
    
//     for(col=row; col>=1; col--) {
//         // or we can do this for(; col>=1; col--)
//         int ans = col;
//         char ch = ans + 'A' - 1;
//         cout << ch;
        
//     }
//     cout << endl;
// }



// // Numeric full pyramid
// int n;
// cin >> n;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << "  ";
//     }

//     for(int j=0; j<i+1; j++) {
//         cout << j+i+1 << " ";
//     }
//     int count = 2*i; 
//     for(int j=0; j<i; j++) {
//         cout << count << " ";
//         count--;
//     }
//     cout << endl;
// }




// H.W =>  all the patterns given as home work in week 2 1'st video. 
// H.W
int n;
cin >> n;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         if(i==0 || j==0 || j== n-i-1)   cout << "* ";
//         else  cout << "  ";
//     }
//     cout << endl;
// }

// // Hollow pyramid
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << " ";
//     }
//     if(i==0 || i==n-1) {
//         for(int j=0; j<i+1; j++) {
//         cout << "* ";
//         }
//     }

//     else {
//         cout << "*";
//         for(int j=0; j<2*i-1; j++) {
//             cout << " ";
//         }   
//         cout << "*";
//     }
// cout << endl;
// }

// // numeric hollow half pyramid
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//        if(j==0) cout << "1 ";
//        else if(i==n-1)  cout << j+1 << " ";
//        else if(j==i) cout << j+1 << " ";
//        else cout << "  ";  
//     }
//     cout << endl;
// }

// // Numeric palindrome equilateral pyramid
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << "  ";
//     }
    
    
//     for(int j=0; j<i+1; j++) {
//         cout << j+1 << " ";
//     }
//     int k=i;
//     for(int j=0; j<i; j++) {
//         cout << k << " ";
//         k--;
//     }
//     cout << endl;
// }

// // fancy pattern 1
// for(int i=0; i<n; i++) {
//     for(int j=0; j<2*n-2-i; j++) {
//         cout << "*";
//     }

//     for(int j=0; j<i+1; j++) {
//         if(j==i) cout << i+1;
//         else cout << i+1 << "*";
//     }

//     for(int j=0; j<2*n-2-i; j++) {
//         cout << "*";
//     }
//     cout << endl;
// }

// // Solid half diamond
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//         cout << "* ";
//     }
//     cout << endl;
// }

// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << "* ";
//     }
//     cout << endl;
// }

// // fancy pattern 2
// for(int i=0; i<n; i++) {
//     int k=i-1;
//     for(int j=0; j<2*i+1; j++) {
//         if(j==0 || j==2*i) cout << "* ";
//         else if(j<=i) cout << j << " ";
//         else if(k>0) {
//             cout << k << " ";
//             k--;
//         }
//     }
//     cout << endl;
// }
    
// for(int i=0; i<n-1; i++) {
//     int k=n-i-3;
//     for(int j=0; j < 2*(n-i)-3; j++) {
//         if(j==0 || j == 2*(n-i)-4) cout << "* ";
//         else if(j<=(n-i)-2) cout << j << " ";
//         else if(k>0) {
//             cout << k << " ";
//             k--;
//         }
//     }
//         cout << endl;
// }


// // fancy pattern 3
// int count =1;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//         if(j==i) {
//             cout << count;
//             count++;
//         } else {
//             cout << count << "*";
//             count++; 
//         }
//     } 
//     cout << endl;
// }

// int start = count-n;
// for(int i=0; i<n; i++) {
//     int k=start;
//     for(int j=0; j<n-i; j++) {
//         if(j==n-i-1) {
//              cout << k;
//              start = start - (n-i-1);
//         }

//         else {
//             cout << k << "*";
//             k++;
//         }
//     }
//     cout << endl;
// }


// // Floyd's Triangle pattern
// int count = 1;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//         cout << count << " ";
//         count++;
//     }
//     cout << endl;
// }


// // Pascal's Triangle
// int c=1;
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//         cout << c << " ";
//         c = c*(i-j)/j;
//     }
//     cout << endl;
// }


// // Butterfly pattern
// for(int i=0; i<n; i++) {
//     for(int j=0; j<i+1; j++) {
//         cout << "* ";
//     }

//     for(int j=0; j<2*(n-i)-1; j++) {
//         cout << "  ";
//     }

//     for(int j=0; j<i+1; j++) {
//         cout << "* ";
//     }
//     cout <<  endl;
// }

// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << "* ";
//     }

//     for(int j=0; j<2*i+1; j++) {
//         cout << "  ";
//     }

//     for(int j=0; j<n-i; j++) {
//         cout << "* ";
//     }
//     cout << endl;
// }

// // Numeric hollow pyramid
// for(int i=0; i<n; i++) {
//     for(int j=0; j<n-i; j++) {
//         cout << " ";
//     }

//     if(i==n-1) {
//         for(int j=0; j<i+1; j++) {
//             cout << j+1 << " ";
//         }
//     }

//     else {
//         for(int j=0; j<i+1; j++) {
//             if(j==0) cout << 1 << " ";
//             else if(j==i) cout << i+1 << " ";
//             else cout << "  ";
//         }
//     }
//     cout << endl;
// }

// Alternate numeric hollow pyramid
for(int i=0; i<n; i++) {
    for(int j=0; j<n-i; j++) {
        cout << " ";
    }
    
    for(int j=0; j<2*i+1; j++) {
        if(i==n-1 && j<n) cout << j+1 << " ";
        else if(j==0) cout << 1;
        else if(j==2*i && i!=n-1) cout << i+1;
        else cout << " ";
    }
    cout << endl;
}


}


 


