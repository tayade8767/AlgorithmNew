#include<bits/stdc++.h>
using namespace std;

void MergeCall(vector<int>&merge,int left,int mid,int right)
{
    vector<int>temp;
    int i=left,j=mid+1;
    while(i<=mid && j<=right)
    {
        if(merge[i]<=merge[j])
        {
            temp.push_back(merge[i]);
            i++;
        }
        else{
            temp.push_back(merge[j]);                                                                //   thsi code is for the sort the recursive call of the vector of array
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(merge[i]);
        i++;
    }
    while(j<=right)
    {
        temp.push_back(merge[j]);
        j++;
    }
    i = 0;
    for(int k=left;k<=right;k++)
    {
        merge[k]=temp[i++];
    }
}


void MergeSort(vector<int>&merge,int l,int r)
{
    if(l == r)
    {
        return ;
    }
    int mid = (l+r)/2;
    MergeSort(merge,l,mid);                                   //   divide the array into left half and right sub half
    MergeSort(merge,mid+1,r);                 //   divide array in to 2 parts
    MergeCall(merge, l, mid, r);
}

int main()
{
    cout<<"Enter the Number of Element :: ";
    int n,kk;
    cin>>n;
    vector<int>merge;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value :: ";
        cin>>kk;
        merge.push_back(kk);
    }

    cout<<"Element Before Sorting :: ";
    for(int i=0;i<merge.size();i++)
    {
        cout<<merge[i]<<" ";
    }
    cout<<endl;

    MergeSort(merge,0,merge.size());

    cout<<"Element After Sorting :: ";
    for(int i=0;i<merge.size();i++)
    {
        cout<<merge[i]<<" ";
    }
}