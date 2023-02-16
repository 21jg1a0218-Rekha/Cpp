//author :P.kanchana Rekha 14/2/23
/* Take 10 integer inputs from uset and store them in an array and print them on screen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n value: ";
    cin>>n;
    int arr[n];
    cout<<"enter the values in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"print the array :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



