//Author :P.Kanchana Rekha -15/2/23
/*Take 20 integers from uset and print the following:
1.number of positive 2.number of negative.3.number of odd 4.number of even5.number of 0*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,pos=0,neg=0,even=0,odd=0,zero=0;
    cout<<"enter the value of n=";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        pos++;
        else if(arr[i]==0)
        zero++;
        else
        neg++;

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<" number of positive numbers in the given array="<<pos;
    cout<<"\n number of negative numbers in the given array="<<neg;
    cout<<"\n number of even numbers in the given array="<<odd;
    cout<<"\n number of odd numbers in the given array="<<even;
    cout<<"\n number of zero numbers in the given array="<<zero;
    return 0;

}