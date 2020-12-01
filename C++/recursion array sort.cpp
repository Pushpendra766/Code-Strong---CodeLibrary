#include<iostream>
using namespace std;
int sorted(int arr[],int n){
    if( n==1){
        return 1;
    }
    int prevsort=sorted(arr+1,n-1);
    return(arr[0]<arr[1] && prevsort);
}
int main()
{
    int arr[8]={1,2,7,4,5,6,7,8};
    cout<<sorted(arr,8);
    return 0;
}
