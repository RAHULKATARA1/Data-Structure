#include<iostream>
#include<unordered_map>
using namespace std;

void countcharacter(unordered_map<char,int> &mapping, string str){
    for(int i = 0; i < str.length(); i++){ // Corrected the loop by adding i++
        char ch = str[i];
        mapping[ch]++;
    }
}

int main(){
    string str = "Rahulkatara";
    unordered_map<char, int> mapping;
    countcharacter(mapping, str);
    
    for(auto i : mapping){
        cout << i.first << " -> " << i.second << endl;
    }
    
    return 0;
}
