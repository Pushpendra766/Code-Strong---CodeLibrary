#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
    int maxsum=INT_MIN,currsum=0;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum = max (maxsum,currsum);
        
        
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum,nonwrapsum;
    nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
        
    }
    wrapsum=totalsum+kadane(a,n);
    cout<<max(wrapsum,nonwrapsum);

    return 0;
    
}

