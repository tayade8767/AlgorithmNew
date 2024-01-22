#include <bits/stdc++.h>
using namespace std;

class Heapsort
{
    public:
    void Createheap(int a[],int n)                  //     it is max heap
    {
        int i=n,temp=a[n];
        while(i>0 && temp>a[i/2])
        {
            swap(a[i/2],a[i]);
            i=i/2;
        }
    }
    void DeleteHeap(int a[],int n)
    {
        int i=1,j=i*2;
        int x=a[1];
        a[1]=a[n];
        while (   j<n   )
        {
            if(a[j+1]>a[j])
            {
                j++;
            }
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
                i=j;
                j=i*2;
            }
            else
            {
                break;
            }
        }
        a[n]=x;
    }
};
int main() 
{
    Heapsort h;
    int n;
    cout<<"enter the element::";
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        h.Createheap(a,i);
    }
    cout<<endl<<"created heap::";
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    int k=n;
    for(int i=1;i<=n;i++)
    {
        h.DeleteHeap(a,k);
        k--;
    }
    cout<<endl<<"Deleted or Heap Sort::";
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}