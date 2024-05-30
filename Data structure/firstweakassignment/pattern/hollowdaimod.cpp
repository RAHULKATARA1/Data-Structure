//hollow daimond = hollow pyramid and hollow inverted  pyramid code 
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>> num;
   int n=num/2;
   // hollow pyramid code
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
            // print star for first and last collum
            if(col==0 || col==row+1-1)
            {
                 cout<<"* ";
            }
            // print space for every between first and last 
            // colllum print space 
            else{
                cout<<"  ";

            }
        }

        cout<< endl;

    }
    // hollow inverted pyramid code
    for (int row=0; row<n; row++)
    {
        //space
        for(int col=0; col<row; col++)
        {
            cout<<" ";
        }
        int totalcol= n-row;
        //star
        for(int col=0; col<totalcol; col++)
        {
            // total coll = n-row
            //FIRST and last collum then print star
            if(col==0 || col == totalcol-1)
            {
                cout<<"* ";
            }
            else
            {
                 cout<<"  ";
            }
                    }
        cout<< endl;
    }
    return 0;
}