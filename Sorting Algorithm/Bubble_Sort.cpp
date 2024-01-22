#include<bits/stdc++.h>
using namespace std;

class Bubble
{
    public:

    void BubbleSort(vector<int>&bubble,int i,int n)          //    edward harry friend 1956 - ACM (Association computing machinary)
    {
        for(int i = n ; i>=0 ;i--)
        {
            for(int j=0;j<=i-1;j++)
            {
                if(bubble[j] >= bubble[j+1])
                {
                    swap(bubble[j],bubble[j+1]);                       //   take element an put in the last position
                }
            }
        }
    }

};

int main()
{
    Bubble b;
    cout<<"Enter the Number of Element :: ";
    int n,kk;
    cin>>n;
    vector<int>bubble;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value :: ";
        cin>>kk;
        bubble.push_back(kk);
    }

    cout<<"Element Before Sorting :: ";
    for(int i=0;i<bubble.size();i++)
    {
        cout<<bubble[i]<<" ";
    }
    cout<<endl;

    b.BubbleSort(bubble,0,bubble.size());

    cout<<"Element After Sorting :: ";
    for(int i=0;i<bubble.size();i++)
    {
        cout<<bubble[i]<<" ";
    }
}