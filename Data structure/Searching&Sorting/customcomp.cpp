
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &v){
    for(int i=0; i< v.size(); i++){
         cout<<v[i]<<" ";

    }
    cout<<endl;
}
bool mycomp(int &a , int &b){
    return a > b;// for decreasing order sorting
    // return a<b // for increasing order sorting
}
int main(){
    vector<int> v ;
    //sort(v.begin(), v.end()); // this will do sorting in increasing order
    // in array this will be doing like this 
    // sort(v, v+size)
    // by below function we can sort the array in both increasing and decreasing order
    v.push_back(44);
    v.push_back(55);
    v.push_back(22);
    v.push_back(11);
    v.push_back(33);

 sort(v.begin(),v.end(), mycomp);
    print(v);
    return 0;

}