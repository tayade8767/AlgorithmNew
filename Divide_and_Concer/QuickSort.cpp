#include<iostream>
using namespace std;

int Partision(int a[],int l,int r)
{
    int pivot=a[l],i=l,j=r;

    while(i<j)
    {
        do
        {
            i++;
        }while(pivot>=a[i]);
        do
        {
            j--;
        } while(pivot<a[j]);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;
}

void QuickSort(int a[],int l,int r)
{
    if(l<r)
    {
        int j=Partision(a,l,r);
        QuickSort(a,l,j);
        QuickSort(a,j+1,r);
    }
}

int main()
{
    int n;
    cout<<"Enter the number::";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Element before Quick Sort::";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

      QuickSort(a,0,n-1);
cout<<endl;
    cout<<"Element After Quick Sort::";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
