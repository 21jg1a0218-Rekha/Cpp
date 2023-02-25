//Author;P.Kanchana Rekha,
/*To find the second smallest element in the array*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp;
    cout<<"enter the n value:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"the second smallest element ="<<arr[1]<<"\n the largest element element ="<<arr[n-1];
    return 0;
}
