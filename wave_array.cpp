//Author:P.Kanchana Rekha;
/* To Sort a given unsorted array in wave form that is an array in wave form when 
array[0]>=array[1]<=array[2]>=array[3]*/
#include<bits/stdc++.h>
using namespace std;
void swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void array_in_wave(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n-1;i+=2)
    {
        swap(&arr[i],&arr[i+1]);
    }
}
int main()
{
    int n,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\n Enter elements:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"original array:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    array_in_wave(arr, n);
    cout<<"\n Wave form of the array is:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}