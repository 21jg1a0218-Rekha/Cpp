//Author:P.Kanchana Rekha;
/* To rearrange the elements in the zig-zag fashion way
the format zig-zag array in form a<b>c<d>e<f
#include<bits/stdc++.h>
using namespace std;
void(zig_zag_array(int arr[],int n))
{
    int i;
    bool ans=true;
    for(i=0;i<=n-2;i++)
    {
    if(ans)
    {
       if(arr[i]>arr[i+1])
          swap(arr[i],arr[i+1]);
    }
    else
    {
        if(arr[i]<arr[i+1])
           swap(arr[i],arr[i+1]);
    }
    ans=!ans;
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
    zig_zag_array(arr,n);
    cout<<"\n New array elements:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
