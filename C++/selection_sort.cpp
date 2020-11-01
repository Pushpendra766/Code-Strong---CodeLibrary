#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    selection_sort(a,n);
    return 0;
}
