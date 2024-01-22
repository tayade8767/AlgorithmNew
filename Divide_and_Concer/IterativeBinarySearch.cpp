
#include<iostream>
using namespace std;
class IterativeBinarysearch                                      //  it is Iterative Binary serach
{
    public:
    int IBS(int a[],int n,int key)
    {
        int left=0,right=n,mid;
        while (left<=right)
        {
            mid=(left+right)/2;
            if(key==a[mid])
            {
                return mid;
            }else if(key<a[mid])
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return -1;
    }
};
int main()
{
    IterativeBinarysearch IBS;
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
    int index=IBS.IBS(a,n,key);
    if(index==-1)
    {
        cout<<"Element is not found"<<endl;
    }
    else{
        cout<<"Element is found at index::"<<index<<endl;
    }
    return 0;
}