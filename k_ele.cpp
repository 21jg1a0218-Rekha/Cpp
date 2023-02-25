//Author:P.Kanchana Rekha
/* To find the k th largest element in the array*/
#include<bits/stdc++.h>
using namespace std;
int kth_largest_element(int arr[],int k,int n)
{
    sort(arr,arr+n);
    return arr[n-k];
}
int main()
{
    int n,i;
    cout<<"enter the n value :";
    cin>>n;
    cout<<"enter the elements in the array:";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"The sorted array:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"\n enter the value of k:";
    cin>>k;
    cout<<"The kth largest element="<<kth_largest_element(arr,k,n);
    return 0;
}