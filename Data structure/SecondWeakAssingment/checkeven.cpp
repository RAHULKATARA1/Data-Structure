#include<iostream>
using namespace std;
//void checkevenodd(int num){
  /*   if(num<1){
        cout<<"number is invalid"<<endl;
    }
    else if(num%2==0){
        cout<< num << ":" << "is an even number "<< endl;
    }
    else{
        cout<< num << ":" << "is an odd number "<< endl;
    } */
    // bu using bitwise operator
//}
bool checkEven(int num){
     if (num&1==0)
     {
        return true;
     }
     else{
        return false;
     }
     
}
int main(){
    int number;
    cin >> number;
   // checkevenodd(number);
   bool isEven = checkEven( number);
   if(isEven){
    cout<< number<<" "<<"is even number";
   }
   else{
    cout<< number<<" "<< "is odd number";
   }
        return 0;
}