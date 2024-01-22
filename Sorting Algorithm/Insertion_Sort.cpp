#include<bits/stdc++.h>
using namespace std;

class Insertion
{
    public:

    void InsertionSort(vector<int>&insertion,int i,int n)
    {
        for(int i = 0 ; i < n ;i++)
        {
            int j = i;
            while(j > 0 && insertion[j-1] > insertion[j])
            {
                swap(insertion[j-1],insertion[j]);
                j--;
            }
        }
    }

};

int main()
{
    Insertion b;
    cout<<"Enter the Number of Element :: ";
    int n,kk;
    cin>>n;
    vector<int>insertion;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value :: ";
        cin>>kk;
        insertion.push_back(kk);
    }

    cout<<"Element Before Sorting :: ";
    for(int i=0;i<insertion.size();i++)
    {
        cout<<insertion[i]<<" ";
    }
    cout<<endl;

    b.InsertionSort(insertion,0,insertion.size());

    cout<<"Element After Sorting :: ";
    for(int i=0;i<insertion.size();i++)
    {
        cout<<insertion[i]<<" ";
    }
}