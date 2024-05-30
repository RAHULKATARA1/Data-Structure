#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>> num;
    int n= num/2;
    //full pyramid code
    for (int row=0; row<n; row++)
    {
        //space
        for(int col=0; col<n-row-1; col++)
        {
            cout<<" ";
        }
        //star
        for(int col=0; col<row+1; col++)
        {
            cout<<"* ";
        }
        cout<< endl;

    }
    // inverted full pyramid
     for (int row=0; row<n; row++)
    {
        //space
        for(int col=0; col<row; col++)
        {
            cout<<" ";
        }
        //star
        for(int col=0; col<n-row; col++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}