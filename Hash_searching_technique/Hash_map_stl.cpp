#include<bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
    cout<<"Enter the String"<<endl;
    int n,val;
    cin>>n;

    int arr[n];

    map<int,int> mapp;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    for(int i=0;i<n;i++)                                    //  it is the precomputing 
    {
        mapp[arr[i]]++;
    }

    // fetching

    for(auto it = mapp.begin(); it != mapp.end() ; it++)                                    //  it is the precomputing 
    {
        cout<<it->first<<"   "<<it->second<<endl;
    }

    // cout<<"1 appier "<<hash[0]<<" times"<<endl;
    // cout<<"2 appier "<<hash[2]<<" times"<<endl;
    // cout<<"3 appier "<<hash[3]<<" times"<<endl;
    // cout<<"6 appier "<<hash[6]<<" times"<<endl;

    return 0;
}

