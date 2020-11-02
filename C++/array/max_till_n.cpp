#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int maxn=INT_MIN;
    for(int i=0;i<n;i++){
        maxn=max(a[i],maxn);
        cout<<maxn<<" ";
    }
    
    return 0;
    
}
