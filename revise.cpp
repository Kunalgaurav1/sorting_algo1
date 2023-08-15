/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//square of a number 
/* 

#include <iostream>

using namespace std;

int main()
{
    int x , n;
    cin >> x >> n;
    int result = 1;
    
    if(x == 0 && n == 0 ){
        return 1;
    }else{
        for(int i =0; i<n; i++){
            result = result * x;
        }
        
        cout << result << endl;
    }

    return 0;
}
*/










//printing evensum and oddsum of a number 
/*

eg.

23456
evennumber is -- 2,4,6  ==>> sum is 12
oddnumber is --3, 5 ==>> sum is 8

*/
/* 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int evenSum = 0;
    int oddsum = 0;
    
    while(n!=0){
        int digit = n % 10;
        if(digit % 2 == 0){
            evenSum += digit;
        }else{
            oddsum += digit;
        }
        
        n = n / 10;
    }
    
    cout << evenSum << " " << oddsum << endl;
    return 0;
}

*/








//reverse a number
/* 

#include<iostream>
using namespace std;

int reversednumber(int n){
    int reversednumber = 0;
    
    while(n != 0){
        int digit = n % 10;
        
        reversednumber = reversednumber * 10 + digit;
        
        n = n / 10;
    }
    
    return reversednumber;
}

int main(){
    int n;
    cin>> n;
    
    int ans = reversednumber(n);
    
    cout << ans;
    
    
}
*/








//count number of factor of a given number 

/* 

#include<iostream>
using namespace std;

void factor(int n){
    
    int countfactor = 1;
    
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            cout << i << " " ;
            countfactor++;
        }
    }
    
    if(countfactor == 1  ){
        cout << "-1" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    
    
    factor(n);
    
    return 0;
}
*/









//star printing 

/*
*
**
***
****
*/

/* #include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    
    int i = 1; 
    while(i<=n){
        
        
        
        int j = 1;
        while(j<=i){
            cout<< "*";
            j++;
        }
        
        cout<< endl;
        
        i++;
    }
    return 0;
} 








//REVERSE NUMBER PATTERN 

/*
1
21
321
4321

*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << i-j+1;
            j++;
        }
        cout << endl;
        
        i++;
    }
    return 0;
}

*/







//char pattern

/*
A
BB
CCC
DDDD
*/


/*

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>> n;
    
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=i){
            char ch = 'A' + i -1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
*/









//charecter pattern
/*
A
BC
CDE
DEFG
*/

/*

#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    
   char ch = 'A';
   for(int i = 0; i<n; i++){
       for(int j = 0; j<=i; j++){
           cout << ch++;
       }
       cout << endl;
       ch = 'A' + i + 1;
   }
    return 0;
}
*/







//number is prime or not 
/*
#include<iostream>

using namespace std;

bool isprime(int n){
    int d = 2;
    while(d<n){
        if(n % d==0){
            return false;
            
        }
        d++;
    }
    
    return true;
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 2; i<=n; i++){
        if(isprime(i)){
            cout << i << " " ;
        }
    }
    
    
    return 0;
}

*/






//find maximum element in an array
/*

#include<iostream>
#include <bits/stdc++.h>
#include<limits.h>
using namespace std;

int
returenMAX (int arr[], int n)
{
    
     int max= INT_MIN;
    
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    return max;



}

int
main ()
{
  int n;
  cin >> n;

  int arr[100];

  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    
    int ans  = returenMAX(arr, n);
    cout << ans;




  return 0;
}
*/








//total sum of given array

/*
#include<iostream>
using namespace std;

int returnSum(int arr[], int n){
    int arraySum = 0;
    
    for(int i = 0; i<n; i++){
        arraySum += arr[i];
    }
    
    return arraySum;
}

int main(){
    int n;
    cin >> n;
    
    int arr[100];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int ans = returnSum(arr, n);
    cout << ans;
    
    
}
*/






//reverse a given array
/*

#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int s = 0; 
    int e = n-1;
    
    while(s<e){
        // int temp = arr[s];
        // arr[s] = arr[e];
        // arr[e] = temp;
        
        // s++;
        // e--;
        
        swap(arr[s++], arr[e--]);
    }
}

int main(){
    
    int n;
    cin >> n;
    
    int arr[100];
    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    reverseArray(arr, n);
    
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
*/









//alternate swapping in a array
/*
#include<iostream>
#include<vector>
using namespace std;

void alternateSwap(int arr[], int n){
    
    for(int i = 0; i<n; i= i+2){
        int temp =  arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
    }
    
    
}

int main(){
    
    int n;
    cin >> n;
    
    int arr[100];
    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    alternateSwap(arr, n);
    
    for(int i=0; i<n; i++){
        cout <<arr[i] << " " ;
    }
    return 0;
}

*/








//number palindrome 
/*

#include<iostream>
using namespace std;

int reversednumber(int n){
    int reversednumber=0;
    
    while(n>0){
        int digit =  n % 10;
        reversednumber = reversednumber * 10 + digit;
        
        n = n/10;
        
    }
    
    return reversednumber;
}

int main(){
    int n;
    cin>> n;
    
    int original = n;
    
   int ans= reversednumber(n);
   
   if(ans==n){
       cout << "palindrome number" << endl;
   }else{
       cout << "not palindrome" ;
   }
    
    
    return 0;
}
*/







//string palindrome

/*

#include<iostream>
using namespace std;

string isPalindrome(string S){
    for(int i = 0; i<S.length(); i++){
        
        if(S[i] != S[S.length() -i - 1]){
            return "no";
        }
        
    }
    
    return "yes";
}

int main(){
    
    string S;
    cin >> S;
    
    //string S = "ABCDE";
    
    cout << isPalindrome(S);
    
    return 0;
}
*/



