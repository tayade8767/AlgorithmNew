#include<bits/stdc++.h>
using namespace std;

int CallQuickSort(vector<int>&quick,int l,int r)
{
    int pivot = quick[l], i = l,j = r;
    while(i < j)
    {
        do{
            i++;
        }while(pivot >= quick[i]);
        do{
            j--;
        }while(pivot < quick[j]);
        if(i < j)
        {
            swap(quick[i],quick[j]);
        }
    }
    swap(quick[l],quick[j]);
    return j;
}

void QuickSort(vector<int>&quick,int l,int r)
{
    if(l < r)
    {
        int j = CallQuickSort(quick,l,r);
        QuickSort(quick,l,j);
        QuickSort(quick,j+1,r);
    }
}
int main()
{
    cout<<"Enter the Number of Element in the array";
    int n,kk;
    cin>>n;
    vector<int>quick;
    for(int i=0;i<n;i++)
    {
        cin>>kk;
        quick.push_back(kk);
    }

    cout<<"Element Before Sorting :: ";
    for(int i=0;i<quick.size();i++)
    {
        cout<<quick[i]<<" ";
    }
    cout<<endl;

    QuickSort(quick,0,quick.size());

    cout<<"Element After Sorting :: ";
    for(int i=0;i<quick.size();i++)
    {
        cout<<quick[i]<<" ";
    }
}