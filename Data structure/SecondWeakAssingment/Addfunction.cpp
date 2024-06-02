#include<iostream>
using namespace std;
//without return type function define
void printsum(int a, int b, int c){
    int answer= a+b+c;
    cout<<"sum is:"<< answer<< endl;
}
// return type function define
int printadd(int x , int y, int z)
{
    int answer=x+y+z;
    return answer;
}
int main(){
    //function call without return type
    cout<< "function call without return type"<< endl;
    printsum(1,2,3);
    cout<< endl;
    // function call with return type
    int sum=printadd(1,2,3);
    cout<< "function call with return type"<< endl;
    cout<<"sum is:"<<sum;
    
    // also can be return as this
    // cout<<"sum is:"<< printadd(1,2,3);
    cout<< endl;
}