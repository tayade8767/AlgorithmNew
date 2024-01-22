#include<bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
    cout<<"Enter the number of element You have to enter in the array "<<endl;
    int n,search,i,c=0,data;
    cin>>n;
    vector<int> Jump;
    for(i=0;i<n;i++)
    {      

        cin>>data;                         //  it data in the jump array
        Jump.push_back(data);
    }

    sort(Jump.begin(),Jump.end());                         //   sort the Jump array
   
   cout<<"Enter the Element For the Search :: ";
   cin>>search;
    
    int end=sqrt(n),start=0;

    while(Jump[end] < search && start < n)
    {
        start=end;
        end=end+sqrt(n);                                      //  this while loop is for the find the subsequence to find the array in the subsequence
        if(end > (n-1))
        {
            end=n;
        }
    }

    for(int i=start;i<=end;i++)
    {
        if(Jump[i] == search)
        {
            c=i;
            break;
        }
    }

    if(c == 0)
    {
        cout<<"Element is not Found"<<endl;
    }
    else
    {
        cout<<"Element is Found At index "<<c<<endl;
    }


    return 0;
}

