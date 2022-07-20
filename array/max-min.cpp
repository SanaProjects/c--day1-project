#include<iostream>
using namespace std;


int main()
{
    int a[5],max,min,i;
    

    for (i=0; i<5; i++)
    {
        cout<<endl<<"Enter the value a : ";
        cin>>a[i];

        if (i==0)
    {
        max=a[i];
        min=a[i];

    }

    else if (a[i]>max)
    {
        max=a[i];
    }
    else if (a[i]<min)
    {
        min=a[i];
    }
       
    }

    
    

    cout<<endl<<"Maximum = "<<max;
    cout<<endl<<"Minimum = "<<min;
    
    


    return 0;
}