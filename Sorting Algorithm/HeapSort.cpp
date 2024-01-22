#include<bits/stdc++.h>
using namespace std;
class Heap
{
    public:
    void CreateHeap(int a[],int i)
    {
        while((i > 0) && (a[i] > a[i/2]))
        {
            swap(a[i],a[i/2]);
            i/=2;
        }
    }

    void DeleteHeap(int a[],int n)
    {
        int temp = a[1];
        a[1] = a[n];

        int i=1 ,j=2*i ;
        while (   j<n   )
        {
            if(a[j+1] > a[j])
            {
                j++;
            }
            if (a[i] < a[j])
            {
                swap(a[j],a[i]);
                i=j;
                j = i*2;
            }
            else
            {
                break;
            }
        }
        a[n]=temp;
    }

};
int main()
{
    Heap h;
    int n;
    cout<<"Enter the Number of Element :: ";
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the value :: ";
        cin>>a[i];
    }
    cout<<"Currently We are Creating the Heap "<<endl;
    for(int i=1;i<=n;i++)
    {
        h.CreateHeap(a,i);
    }
    cout<<"Created Max Heap :: ";
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Deleting Heap and sort array Element"<<endl;
    for(int i=1;i<=n;i++)
    {
        h.DeleteHeap(a,n-i+1);
    }
    cout<<"Max Heap Sorted Element :: ";
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}