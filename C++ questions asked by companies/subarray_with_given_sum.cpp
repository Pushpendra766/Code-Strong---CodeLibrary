
/*
This program is about comparing a given sum with sum of elements subarrays of the given 
array and then give the position of start and end of that subarray whose sum is equal to
given sum.
the condition= O(n)
*/
#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i=0,j=0,sum=0,st=-1,en=-1;
    while(j<n&&sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        if(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;
    return 0;
}

