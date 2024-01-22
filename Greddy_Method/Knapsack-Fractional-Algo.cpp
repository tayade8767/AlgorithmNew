#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the Capacity of the Bag::";
    double capacity,total=0;
    cin>>capacity;
    cout<<"Enter the Element::";
    int n;
    cin>>n;
    double profit[n],weight[n];
    double pw[n];
    cout<<"Enter the value for profit"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>profit[i];                                                         //      storing the profit
    }
    cout<<"Enter the value for Weight"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];                                               //   for the storing the weight
    }
    for(int i=0;i<n;i++)                                                                             //   it is the 1st step 
    {
        pw[i]=profit[i]/weight[i];                             //   it the profit per weight      (  pw = profit/weight  )
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(pw[i] <= pw[j])
            {
                swap(pw[i],pw[j]);                                        //     arranging the element in according to Deresing order 
                swap(profit[i],profit[j]);                               //      arranging the element in according to profit/weight 
                swap(weight[i],weight[j]);                              //       arranging the element in according to profit/weight 
            }
        }
               if((capacity-weight[i]) < 0)
                {
                    total+=(capacity*profit[i])/weight[i];           //        
                    break;
                }
                else
                {
                    total=total+profit[i];                         //      count the profit it is in the derecring order
                    capacity=capacity-weight[i];                  //       derese the capacity of the bag of thief    k   
                }
    }
    cout<<endl;
    // int total=0;
    // for(int i=0;i<n;i++)
    // {
    //     if((capacity-weight[i]) < 0)
    //     {
    //         total+=(capacity*profit[i])/weight[i];                     //    we have to use this also but in this case space and time is greater
    //         break;
    //     }
    //     else
    //     {
    //         total=total+profit[i];
    //         capacity=capacity-weight[i];
    //     }
    // }
    cout<<"Total Earning of the Stolen is  "<<total;

    return 0;
}