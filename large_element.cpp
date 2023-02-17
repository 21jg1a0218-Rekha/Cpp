//Author:P.Kanchana Rekha -17/2/23
/*To find the largest element of a given array of integers*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    
        cin>>arr[i];
    
   for(i=1;i<n;i++)
   {
    if(arr[0]<arr[i])
    
      arr[0]=arr[i];
   }
    cout<<"the largest  element in the given array is "<<arr[0];
    
    return 0;
   }

