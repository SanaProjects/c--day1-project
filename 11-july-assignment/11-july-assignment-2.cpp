#include<iostream>
using namespace std;

int main()
{
    int i,n,t=0,a;



    for (i = 1; i <= 10; i++)
    {
        cout<<endl<<"Enter the no. : ";
        cin>>n;

     
        t +=n;
        
    }
    
    


    

    cout<<endl<<"Total = "<<t;
    cout<<endl<<"Average = "<<t/10;
    
    
    return 0;

}