//Author;P.Kanchana Rekha;
/* To divide the 0 and 1 in the given array*/
#include<bits/stdc++.h>
using namespace std;
void segregate_num(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
           count++;
    }
    for(int i=0;i<count;i++)
    {
        arr[i]=0;
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=1;
    }
}
int main()
{
     int n,i,result;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    segregate_num(arr,n);
    cout<<"\n Array after divided:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}