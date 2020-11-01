#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
     cin>>a[i];   
    }
    int maxn=INT_MIN;
    int minn=INT_MAX;
    for(int i=0;i<n;i++ ){
       maxn=max(maxn,a[i]);
       minn=min(minn,a[i]);
    }
    cout<<"\nMax ="<<maxn;
    cout<<"\nMin="<<minn;
    return 0;
}
