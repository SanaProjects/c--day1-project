// counting even odd positive negative and zero in array of 10 elements

#include<iostream>
using namespace std;


int main()
{
    int a[10],i,positive=0,negative=0,zero=0;
    

    for (i=0; i<10; i++)
    {
        cout<<endl<<"Enter the value a : ";
        cin>>a[i];

        if (a[i]<0)
        {
            negative++;
        }
        else if (a[i]>0)
        {
            positive++;
        }        
        else
        {
            zero++;
        }
        
        
    }

    
    cout<<endl<<"Positive : "<<positive++;
    cout<<endl<<"Negative : "<<negative++;
    cout<<endl<<"Zero : "<<zero++;

    
    
    


    return 0;
}