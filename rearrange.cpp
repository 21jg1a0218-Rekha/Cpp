//Author P.Kanchana Rekha
/* To rearrange a given sorted array positive numbers like a>b<c>d<e...*/
#include<bits/stdc++.h>
using namespace std;
void rearrange_max_min(int num[],int n)
{
    int temp[n];
    int small_num=0,large_num=n-1;
    int result=true;
    for(int i=0;i<n;i++)
    {
        if(result)
        temp[i]=num[large_num--];
        else
        temp[i]=num[small_num++];
        result=!result;
    }
    for(int i=0;i<n;i++)
        num[i]=temp[i];

}
int main()
{
    int num[]={0,1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(num)/sizeof (num[0]);
    cout<<"original array";
    for(int i=0;i<n;i++)
    cout<<num[i]<<" ";
    rearrange_max_min(num,n);
    cout<<"\nArray elements after rearranging:";
    for(int i=0;i<n;i++)
    cout<<num[i]<<" ";
    return 0;
}