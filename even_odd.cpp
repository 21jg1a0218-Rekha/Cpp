//Author-P.Kanchana Rekha
/*To separate even and odd numbers of an array
of integers.Put all even numbers first,and then odd numbers*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,event=0,oddt=0,n;
    cout<<"enter the n value:";
    cin>>n;
    int arr[n],even[n],odd[n];
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           even[event++]=arr[i];
        }
        else
        {
          odd[oddt++]=arr[i];
        }
    }
    cout<<"The even numbers are:";
    for(i=0;i<event;i++)
    cout<<even[i]<<" ";
    cout<<"\nThe odd numbers are:";
    for(i=0;i<oddt;i++)
    cout<<odd[i]<<" ";
    return 0;
}