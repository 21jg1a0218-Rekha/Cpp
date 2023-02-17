//Author:P.Kanchana Rekha-17/2/23
/*To find the largest three elements in an array*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,n;
    cout<<"enter the value of n= ";
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
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"three largest elements="<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}