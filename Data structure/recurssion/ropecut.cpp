#include<iostream>
#include<math.h>
using namespace std;
int maxpieces(int n, int a , int b , int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    else{
        int res = max(max(maxpieces(n-a,a,b,c),maxpieces(n-b,a,b,c)),maxpieces(n-c,a,b,c));
        if(res == -1){
            return -1;
        }
        else{
            return res+1;
        }
    }
}
int main(){
    int n,a,b,c;
    cout<<"enter the value of N -> ";
    cin>>n;
    cout<<"enter the value of a -> ";
    cin>>a;
    cout<<"enter the value of b -> ";
    cin>>b;
    cout<<"enter the value of c -> ";
    cin>>c;
    int result = maxpieces(n,a,b,c);
    cout<<"total pieces"<<result<<endl;
    return 0;
}