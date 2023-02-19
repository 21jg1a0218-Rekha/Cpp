//Author;P.Kanchana Rekha,
/*To find the second laregest element in the array*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0,i,j;
    cout<<"enter the n value:";
    cin>>n;
    int arr[n];
    cout<<"enter the values in array:";
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
    
    cout<<"the second smallest element in the array="<<arr[1];
    return 0;
}