#include<iostream>
using namespace std;
//  find maximum of three numbers
 /* void printmax(int num1 , int num2, int num3){
  /*   if(num1 >= num2 && num1>=num3){
        cout<<"maximum is:"<< num1;
    }
    else if(num2>=num1 && num2>= num3){
        cout<< "maximum is:"<< num2;
    }
    else {
        cout<<"maximum is:"<< num3;
    }
} */ 
int findmax(int num1 ,int num2 ,int num3){
    int ans1 = max(num1,num2);
    int finalans = max(ans1, num3);
    return finalans;
}
int main(){
  /*   printmax(4,8,10);
    cout<< endl;
    printmax(10,10,1);
    cout<< endl;
    printmax(2,3,3);
    cout<< endl;
    printmax(1,1,1);
 */
int maximum= findmax(3,10,100);
cout<<"maximum is:"<<maximum;

}