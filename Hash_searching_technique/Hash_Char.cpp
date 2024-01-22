#include<bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
    cout<<"Enter the String"<<endl;
    string a;
    cin>>a;
    
    int hash[26] = {0};

    for(int i=0;i<a.size();i++)
    {
        char z = char(a[i]);
        cout<<"z="<<z<<endl;
        int kk = z - 'a';
        cout<<"kk="<<kk<<endl;
        hash[kk]++;
    }

    
    for(int i=0;i<26;i++)                                    //  it is the precomputing 
    {
        cout<<hash[i]<<endl;
    }

    // fetching

    cout<<"1 appier "<<hash[0]<<" times"<<endl;
    cout<<"2 appier "<<hash[2]<<" times"<<endl;
    cout<<"3 appier "<<hash[3]<<" times"<<endl;
    cout<<"6 appier "<<hash[6]<<" times"<<endl;

    return 0;
}

