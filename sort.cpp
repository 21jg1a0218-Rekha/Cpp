//Author:P.Kanchana Rekha;
/* To sort a given array of 0s,1s and 2s*/
#include<bits/stdc++.h>
using namespace std;
void segregate_num(int arr[],int n)
{
    int countzero=0,countone=0,counttwo=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            countzero++;
        }
        else if(arr[i]==1)
        {
            countone++;
        }
        else
        {
            counttwo=counttwo+1;
        }
    }
    for(int i=0;i<countzero;i++)
    {
        arr[i]=0;
    }
    for(int i=countzero;i<countzero+countone;i++)
    {
        arr[i]=1;
    }
    for(int i=countzero+countone;i<n;i++)
    {
        arr[i]=2;
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