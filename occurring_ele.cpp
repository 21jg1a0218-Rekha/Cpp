//Author:p. kanchana Rekha;
/* To find the most occuring element in the array of integers*/
#include<bits/stdc++.h>
using namespace std;
void number_repeated(int arr[],int n)
{
    int i,j,max_count=0;
    cout<<"the most occurring elements in the array is:";
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    
            if(count>max_count)
            {
                max_count=count;
            }
    }
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
            if(count==max_count)
            {
                cout<<" "<<arr[i];
            }
        }
    
}
int main()
{
    int n,i;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   number_repeated(arr,n);
    return 0;
}
