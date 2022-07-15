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
        for(j=2;j<=n+1;j++)
        {
            cout<<setw(7)<<(j%2);
        }
        cout<<endl;
        
    }

    return 0;
}