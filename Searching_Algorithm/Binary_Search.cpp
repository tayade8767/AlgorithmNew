#include<bits/stdc++.h>
#include<algorithm>
using namespace std;  

int BS(int l,int mid,int r,int search,vector<int>B)
{
    mid=(l+r)/2;
    if(B[mid] == search)
    {
        return mid;
    }
    else if(search < B[mid])
    {
        BS(l,mid,mid-1,search,B);
    }
    else
    {
        BS(mid+1,mid,r,search,B);
    }
    return -1;

}

int main()
{
    cout<<"Enter the number of element You have to enter in the array "<<endl;
    int n,search,i,c=0,data;
    cin>>n;
    vector<int> Binary;
    for(i=0;i<n;i++)
    {      
        cin>>data;                        
        Binary.push_back(data);                         //  it data in the Linear array
    }

    sort(Binary.begin(),Binary.end());                        //  binary search is applied on the Sorted array

   cout<<"Enter the Element For the Search :: ";
   cin>>search;
   int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(Binary[mid] == search)
        {
            c++;
            break;
        }
        else if(Binary[mid] < search)                   //  this is for the Searching the element in vector in Iterrative Way
        {
            l=mid+1;
        }
        else 
        {
            r=mid-1;
        }
    }

    if(c == 0)
    {
        cout<<"Element is Not Found in iteration"<<endl;                       //   this ccode is for the print if the element is not found in the array
    }
    else
    {
        cout<<"Element is found At "<<mid<<" Index in iteration"<<endl;           //  this will print if the element is found in the array
    }

    mid=0;

    int RBS = BS(0,mid,n-1,search,Binary);

    if(RBS == -1)
    {
         cout<<"Element is Not Found in recursion"<<endl;                       //   this ccode is for the print if the element is not found in the array
    }
    else
    {
        cout<<"Element is found At "<<RBS<<" Index in recursion"<<endl;           //  this will print if the element is found in the array
    }
    return 0;
}
