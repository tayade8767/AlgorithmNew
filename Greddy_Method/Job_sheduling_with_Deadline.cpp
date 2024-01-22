#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the number of element You have to enter in the array "<<endl;
    int n;
    cin>>n;
    int deadline[n],profit[n],mx=0,id[n];        //   first a fall we have to make the array of deadline and profit
    cout<<"Enter the Job ID"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>id[i];                                     //  it store the job ID in the id[array]
    }
    cout<<"Enter the Deadline values"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>deadline[i];                             //  it is the deadline array
        if(deadline[i]>mx)                            
        {
            mx=deadline[i];                        //  we have to calculate the highest deadline for the 
        }
    }
    cout<<"Enter the profit values"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>profit[i];                                //    we have to store the profit for the each deadline
    }
    cout<<"First a fall We have to sort the profit in Decreasing order and Deadline with that"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(profit[i]<profit[j])
            {
                swap(profit[i],profit[j]);                 //   sort the profit in Decreasing order
                swap(deadline[i],deadline[j]);            //    sort the deadline according to the profit
                swap(id[i],id[j]);                       //     sort the id according to the profit
            }
        }
    }
    cout<<"deadline and profit value "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<id[i]<<"  "<<deadline[i]<<"  "<<profit[i]<<endl;
    }
    cout<<"Max Deadline is "<<mx<<"  So we have to schedule our Job according max Schedule job"<<endl;
    int job[mx],total_profit=0;
    
    for (int i=1;i<=mx;i++)
    {
        job[i]=-1;                         //   we have to make all job array equal to -1 
    }

    for(int i=1;i<=mx;i++)
    {
        if(job[deadline[i]] == -1)
        {
            job[deadline[i]]=id[i];                              // if the array job[deadline[i]] == -1 then store the job ID
        }
        else                                                  //   else
        {
            int k=deadline[i];                              //  store the deadline value means the at that deadline is already filled with job then the check for the previous one and so on 
            while(job[k] != -1 && (k>=1 && k<=mx))
            {
                k--;
            }
            job[k]=id[i];
        }
        total_profit+=profit[i];                              //   and store the profit
    }
    cout<<"Total profit of the Job with Deadline = "<<total_profit<<endl;
    cout<<"Jobs are perform in the following Order"<<endl;

    for(int i=1;i<=mx;i++)
    {
        cout<<job[i]<<" -> ";
    }
    cout<<endl;
    return 0;
}
