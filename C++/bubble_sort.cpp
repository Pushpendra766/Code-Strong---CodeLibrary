#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++)
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        counter++;
    }
    /*--------------OR---------
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }*/
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
    bubble_sort(a,n);
  return 0;  
}
