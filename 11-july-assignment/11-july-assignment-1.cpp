#include<iostream>
using namespace std;

int main()
{
    int i,a,p=0,n=0,z=0;

    i=1;

    while (i<=10)
    
    {
        cout<<endl<<"Enter the no. : ";
        cin>>a;

        if(a<0)
            n++;
        else if (a>0)
            p++;
        else
            z++;    

    i++;


    }

    cout<<endl<<"Total positive nos. = "<<p;
    cout<<endl<<"Total negetive nos. = "<<n;
    cout<<endl<<"Total Zereos = "<<z;
    
    return 0;

}