#include<bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
    cout<<"Enter the number of element You have to enter in the array "<<endl;
    int n,search,i,c=0;
    cin>>n;
    int Linear[n];
    for(i=0;i<n;i++)
    {                              
        cin>>Linear[i];                         //  it data in the Linear array
    }
   cout<<"Enter the Element For the Search :: ";
   cin>>search;
    for(i=0;i<n;i++)
    {
        if(Linear[i] == search)
        {
            c++;                                      //   this is for the searching the element in the array
            break;
        }
        cout<<i<<endl;
    }
    if(c == 0)
    {
        cout<<"Element is Not Found"<<endl;                       //   this ccode is for the print if the element is not found in the array
    }
    else
    {
        cout<<"Element is found At "<<i<<" Index"<<endl;           //  this will print if the element is found in the array
    }
    return 0;
}

