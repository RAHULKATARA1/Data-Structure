#include<iostream>
#include<cstring>
using namespace std;
 bool pal(char ch[],  int i, int j){
    
    if(i>=j){
        return true;

    }
    else{
        return(ch[i]==ch[j])&& pal(ch , i+1 ,j-1);

    }
}
int main(){
    char ch[100];
    cout<<"enter string :-  ";
    cin>>ch;
    bool st =pal(ch , 0, strlen(ch)-1);
    if(st){
        cout<<"string is palindrome"<<endl;
       
    }
     else{
            cout<<"string is not palindrome"<<endl;
        }

    return 0;
}