#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(e+s)/2;
        if(a[mid]==key)
        return mid;
        else if(a[mid]>key)
        e=mid-1;
        else
        s=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    cout<<binary_search(a,n,key);
    return 0;
}

