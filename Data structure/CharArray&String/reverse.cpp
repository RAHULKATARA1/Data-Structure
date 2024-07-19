#include<iostream>
#include<cstring>
using namespace std;
int findlength(char ch[], int size){
    int index = 0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}
void reverseString(char ch[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[100];
    cout<<"Enter the String"<<" -> ";
    cin.getline(ch,100);
    cout<<"Before -> "<<ch<<endl;
    int length = findlength(ch,100);
    reverseString(ch,length);
    cout<<"After -> "<<ch<<endl;
    return 0;
}