
#include<iostream>
using namespace std;
class RecursiveBinarysearch                                     //  it is Resursive Binary serach
{
    public:
    int RBS(int a[],int left,int right,int key)
    {
        if(right>=left)
        {
           int mid=(left+right)/2;
            if(key==a[mid])
            { 
                return mid;
            }
            else if(key<a[mid])
            {
               return RBS(a,left,mid-1,key);
            }
            else
            {
                return RBS(a,mid+1,right,key);
            }
        }
            return -1;
    }
};
int main()
{
    RecursiveBinarysearch RBS;
    int n,key;
    cout<<"Number of element in array::";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key you want to find::";
    cin>>key;
    int index=RBS.RBS(a,0,n-1,key);
    if(index==-1)
    {
        cout<<"Element is not found"<<endl;
    }
    else{
        cout<<"Element is found at index::"<<index<<endl;
    }
    return 0;
}