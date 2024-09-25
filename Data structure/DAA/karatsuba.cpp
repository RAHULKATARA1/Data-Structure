#include<iostream>
#include<cmath>
using namespace std;
// length 
int getsize(int num){
    int size = 0;
    while(num!=0){
        size++;
        num = num/10;
    }
    return size;
}
// multipication
int karatsuba(int x, int y){
    //base case
    if(x<10 || y<10){
        return x*y;
    }
    // number is greater then 2 digit
    int size = min(getsize(x),getsize(y));
    int m = size / 2;

    int h1 = x / pow(10,m);
    int l1 = x % static_cast<int>(pow(10,m));
    int h2 = y / pow(10,m);
    int l2 = y % static_cast<int>(pow(10,m));

    int A = karatsuba(h1,h2);
    int B = karatsuba(l1,l2);
    int c = karatsuba(h1+l1,h2+l2)-A-B;

    int z = A*pow(10,2*m) + c*pow(10,m) + B;
    return z;
}
int main(){
    int x,y;
    cout<<"Enter the first integer:-    ";
    cin>>x;
    cout<<"Enter the second integer:-   ";
    cin>>y;
    int result = karatsuba(x,y);
    cout<<"The result of karatsuba multipication:-  "<<result<<endl;
    return 0;
}
