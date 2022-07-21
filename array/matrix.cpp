#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<endl<<"Enter value : ";
            cin>>a[i][j];

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<setw(3)<<a[i][j];
            

        }

        cout<<endl;
    }

    
    
    


    return 0;
}