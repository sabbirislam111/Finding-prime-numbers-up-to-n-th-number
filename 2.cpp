#include <bits/stdc++.h>
using namespace std;
// Function to find if number is prime
int checkPrime(int num){
    if (num <= 1)
      { return 0; }
   // Check from 2 to half of arr[i]
   for (int j = 2; j <= num/2; j++){
      if (num % j == 0){
         return 0;
      }
      if(num>10&&num % 5 == 0){
        return 0;
      }
      if(num>3 && num % 3 == 0){
        return 0;
      }
      if(num>10 && num % 7 == 0){
        return 0;
      }
      if(num>17 && num % 17 == 0){
        return 0;
      }



      return 1;
   }
}
int main(){
    int n;
    cin>>n;
   int arr[n] ;

   int isprime=0;
   for(int i=0;i<n+1;i++){
      isprime=checkPrime(i);
      if(isprime==1)
         cout<<i<<" ";
   }

   return 0;
}
