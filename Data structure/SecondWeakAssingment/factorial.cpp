#include<iostream>
using namespace std;
void find_factorial(int number){
    int fact=1;
    for(int i=1; i<=number; i++){
        fact=fact*i;
    }
    cout<<"factorial is "<< fact;
}
int main(){
    int number;
    cin>> number;
    find_factorial(number);
}