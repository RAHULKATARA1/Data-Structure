#include<iostream>
#include<cstring>
void uppercaseconverter(char ch[] , int n){
    int index = 0;
    while(ch[index] != '\0'){
        char currentchar = ch[index];
        //check if lower character than convert to upper.
        if(currentchar >= 'a' && currentchar <= 'z'){
            ch[index] = currentchar - 'a' + 'A';
        }
        index++;
    }
}
int  main(){
    char ch[100];
    std :: cout << "enter the string ->  ";
    std :: cin.getline(ch ,  100);
    std :: cout<< "Before conversion -> "<< ch <<std :: endl;
    uppercaseconverter(ch , 100);
    std :: cout << "After conversion ->  "<< ch <<std :: endl;
    return 0;
}