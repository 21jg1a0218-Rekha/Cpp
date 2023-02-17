//Author:P.kanchana Rekha-17/2/23
/*To find the second largest element in the given array*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
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
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    cout<<"the second largest element in the array ="<<arr[1];
    return 0;
}