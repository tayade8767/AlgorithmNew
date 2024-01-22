#include<bits/stdc++.h>
using namespace std;

class Selection
{
    public:

    void SelectionSort(vector<int>&selection,int i,int n)           //   donald knuth 1925 (The Art of Computing Programming)
    {
        int mini = -1;
        for(int i = 0 ; i < n-1 ;i++)
        {
            mini = i;
            for(int j = i;j < n; j++)
            {
                if(selection[j] < selection[mini])                              //   select the smalect element 
                {
                    mini = j;
                }
            }
            swap(selection[i],selection[mini]);             //  after selecting smallect element swap the element 
        }
    }

};

int main()
{
    Selection b;
    cout<<"Enter the Number of Element :: ";
    int n,kk;
    cin>>n;
    vector<int>selection;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value :: ";
        cin>>kk;
        selection.push_back(kk);
    }

    cout<<"Element Before Sorting :: ";
    for(int i=0;i<selection.size();i++)
    {
        cout<<selection[i]<<" ";
    }
    cout<<endl;

    b.SelectionSort(selection,0,selection.size());

    cout<<"Element After Sorting :: ";
    for(int i=0;i<selection.size();i++)
    {
        cout<<selection[i]<<" ";
    }
}