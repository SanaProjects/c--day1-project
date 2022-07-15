#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, j;

    cout<<endl<<"enter the number : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
       
        if(i%2==1)
        {
            for (j=1;j<=n;j++)
            {
                cout<<setw(5)<<(j%2);
            }
        }
        else if(i%2==0)
        {
            for (j=2;j<=n+1;j++)
            {
                cout<<setw(5)<<(j%2);
            }
        }
        cout<<endl;
        
    }

    return 0;
}