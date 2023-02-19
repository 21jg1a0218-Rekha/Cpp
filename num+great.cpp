//Author;P.kanchana Rekha
/*To find the next greater element  in given array of elements*/
#include<bits/stdc++.h>
using namespace std;
void next_greater(int arr[],int n)
{
    int i,j,next=-1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                next=arr[j];
                break;
            }
        }
        cout<<arr[i]<<".."<<next<<endl;
    }
}
int main()
{
    int n,i;
    cout<<"enter n value=";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    next_greater(arr,n);
    return 0;
}