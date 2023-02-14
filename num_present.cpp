//Author:p.Kanchana Rekha 14\2\23
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n,num,c=0;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number:";
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            c++;
            break;
        }
    }

if(c==0)
{
    cout<<"the number is not present in the array:";
}
else
{
    cout<<i<<"the number is present in the array";
}
    return 0;
}