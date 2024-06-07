#include<iostream>
using namespace std;
bool print_Prime(int number){
    int i=2;
    for( i=2; i<number; i++){
        if (number%1==0)
        {
            return false;
        }
        else
        {
            return true;
        }
        
        
    }
}
int main(){
    int number;
    cin>> number;
    for (int i = 2;i <=number; i++)
    {
        
        bool isPrime = print_Prime(i);
        if (isPrime)
        {
            cout<<i<<" ";
            
        }
        
    }
    

}