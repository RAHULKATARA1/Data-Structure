#include <iostream>
using namespace std;
/* void isPrime(int n) {
   int i, flag = 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         flag=1;
         break;
      }
   }
   if (flag==0)
   cout<<n<<" is a prime number"<<endl;
   else
   cout<<n<<" is not a prime number"<<endl; 
} */
//return karunga true -> if N is a prime no.
// return karunga false -> if N is not a prime no.
bool checkprime(int number){
   for(int i=2; i<number; i++){
      if(number%i==0){
         //remainder =0 -> perfectly devisible
         // so that not a prime number
         return false;
      }
   }
   // yaha per main keh sakta hu ki
   // [ 2,3,4,5......nuber-1], koi bhi
   //perfectly devide nhi kar paya hoga

   // iy mean N is prime nuber
   return true;
}

int main() {
    int number;
    cin>> number;
  // isPrime(number);
  bool prime =checkprime(number);
  if(prime){
   cout<<"it is a prime number";
  }
  else{
   cout<<"it is not a prime number";
  }
   return 0;
}
