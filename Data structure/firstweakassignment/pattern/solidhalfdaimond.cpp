#include<iostream>
using namespace std;
int main(){
      int n;
      cin>> n;
      // #first Method
      //for(int row=0; row<2*n-1;row++){
      //  int cond=0;
        //if(row<n){//Growing phase of Half Daimond
          //  cond=row;
        //}
        //else{//Shrinking phase of Half Daimond
          //  cond=n-(row%n)-2;           ;  
        //}
      //  for(int col=0; col<=cond; col++){
        //    cout<<"*";

        //}
        //cout<<endl;
        
    // }
    //#second Method
    for(int row=0; row<2*n-1; row++){
        int cond = row<n ? row : n-(row%n) -2;
        for(int col=0; col<=cond; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}