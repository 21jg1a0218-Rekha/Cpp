//Author:P.Kanchana Rekha
/* To find the smallest missing element in the array*/
#include<bits/stdc++.h>
using namespace std;
int smallest_missing_num(int arr[],int start_pos,int end_pos)
{
    if(start_pos > end_pos)
       return end_pos+1;
    if(start_pos!=arr[start_pos])
       return start_pos;
    int mid=(start_pos+end_pos)/2;
    if(arr[mid]==mid)
       return smallest_missing_num(arr,mid+1,end_pos);
    return smallest_missing_num(arr,start_pos,mid);
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
    result=smallest_missing_num(arr,0,n-1);
    cout<<"\n smallest missing element is "<<result;
    return 0;
}