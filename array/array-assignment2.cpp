// counting even odd positive negative and zero in array of 10 elements

#include<iostream>
using namespace std;


int main()
{
    int a[10],i,even=0,odd=0;
    

    for (i=0; i<10; i++)
    {
        cout<<endl<<"Enter the value a : ";
        cin>>a[i];

        if (a[i]%2==0)
        {
           even++;
        }
        else if (a[i]%2>0)
        {
            odd++;
        }        
        
        
        
    }

    
    cout<<endl<<"Even : "<<even++;
    cout<<endl<<"Odd : "<<odd++;
    

    
    
    


    return 0;
}