#include<bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
    cout<<"Enter the number of element You have to enter in the array "<<endl;
    int n,search,i,c=0,data;
    cin>>n;
    vector<int> Ternary;
    for(i=0;i<n;i++)
    {     

        cin>>data;                         //  it data in the Ternary array
        Ternary.push_back(data);
    }

    sort(Ternary.begin(),Ternary.end());                         //   sort the ternary array
   
   cout<<"Enter the Element For the Search :: ";
   cin>>search;
    
    int l=0,r=n-1,mid1,mid2,ind=-1;

    while(l<=r)
    {
        mid1 = l+(r-l)/3;
        mid2 = r-(r-l)/3;
        
        if(Ternary[mid1] == search)
        {
            ind=mid1;
            break;
        }
        else if(Ternary[mid2] == search)                         //   checking the ternary array
        {
            ind=mid2;
            break;
        }
        else if(search < Ternary[mid1])
        {
            r = mid1-1;
        }
        else if(search > Ternary[mid2])
        {
            l = mid2+1;
        }
        else
        {
            l = mid1+1;
            r = mid2-1;
        }
    }

    if(ind == -1)
    {
        cout<<"Element is not found in the Ternary Search"<<endl;
    }
    else
    {
        cout<<"Element is Found in the ternary Search in the Index "<<ind<<endl;
    }

    return 0;
}

