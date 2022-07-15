#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n1=1, n2, i, j;

    cout<<endl<<"enter the number : ";
    cin>>n2;

  



    for(i=1; i<=n2; i++)
    {
        
        cout<<setw(5)<<n1++;
        cout<<endl;
      
       
    }

    return 0;
}