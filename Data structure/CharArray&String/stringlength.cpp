#include<iostream>
#include<string.h>
using namespace std;
int stringlength(char ch[], int size){
   /*  int length = 0;
    for(int i=0; i<size; i++){
        if(ch[i]=='\0'){
            //rukna hai
            break;
        }
        else{
            length++;
        }
    }
    return length; */
    int index=0;
    while(ch[index]! ='\0'){
        index++;
    }
    return index;
}
int main(){
    char ch[100];
    cin>>ch;
    // below commad will not terminate after giving space and tab value in string 
    //cin.getline(ch,100);
    int length = stringlength(ch , 100);
    cout<<"length of charcter array is :->"<<" "<<length;
    cout<<endl;
    //cout<<"length of string"<<" " << strlen(ch)<<endl;
    return 0;
}