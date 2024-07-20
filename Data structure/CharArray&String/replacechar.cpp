#include<iostream>
#include<cstring>
void characterReplace(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index]=='@'){
        //replace
        ch[index] = ' ';
        }
        index++;
    }
}

int  main(){
    char ch[20];
    std :: cout << "enter the string ->  ";
    std :: cin.getline(ch ,  20);
    std :: cout<< "Before conversion -> "<< ch <<std :: endl;
    characterReplace( ch, 20);
    std :: cout << "After conversion ->  "<< ch <<std :: endl;
    return 0;
}