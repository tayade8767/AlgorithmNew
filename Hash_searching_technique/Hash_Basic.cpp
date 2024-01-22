#include<bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
    cout<<"Enter the number of element You have to enter in the array "<<endl;
    int n,i,data;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {     
                        //  it data in the arr array
        cin>>arr[i];
    }
    
    int hash[13];

    for(int i=0;i<13;i++)
    {
        hash[i]=0;
    }

    
    for(int i=0;i<n;i++)                                    //  it is the precomputing 
    {
        hash[arr[i]]++;
    }

    // fetching

    cout<<"1 appier "<<hash[1]<<" times"<<endl;
    cout<<"2 appier "<<hash[2]<<" times"<<endl;
    cout<<"3 appier "<<hash[3]<<" times"<<endl;
    cout<<"6 appier "<<hash[6]<<" times"<<endl;

    return 0;
}

