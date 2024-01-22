#include <bits/stdc++.h>
using namespace std;

class Mergesort
{
    public:


    void Merge(int a[],int l,int m,int r)                          //  it give sthe implementation
    {
        int n1=m-l+1;
        int n2=r-m;

        int left[n1],right[n2];
        for(int i=0;i<n1;i++)
        {
            left[i]=a[l+i];
        }
        for(int j=0;j<n2;j++)
        {
            right[j]=a[m+1+j];
        }

        int i=0,j=0,k=l;

        while (i<n1 && j<n2)
        {
            if(left[i]<right[j])
            {
                a[k]=left[i];
                i++;
            }
            else
            {
                a[k]=right[j];
                j++;
            }
            k++;
        }

        while(i<n1)
        {
            a[k]=left[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            a[k]=right[j];
            j++;
            k++;
        }
        

    }
    
    void mergesort(int a[],int l,int r)
    {
        if(l<r)
        {
            int mid=l+(r-l)/2;
            mergesort(a,l,mid);                  //   it gives the array up to mid
            mergesort(a,mid+1,r);               //  it give sthe array from mid to end
            Merge(a,l,mid,r);                  //  it sort the array
        }
    }




};
int main() 
{
    Mergesort m;
    int n;
    cout<<"enter the number element::";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array Before the Merge sort::";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }





    cout<<endl<<"Array After the Merge sort::";
    m.mergesort(a,0,n-1);                            //      it is the mergesort the array

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}