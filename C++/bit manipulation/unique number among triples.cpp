#include<iostream>
using namespace std;
int setbit(int a,int pos){
    return(a | (1<<pos));
}
int getbit(int a,int pos){
    return((a&(1<<pos))!=0);
}
void unique(int a[],int n){
    int result=0;
   
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getbit(a[j],i))
            sum++;
        }
        if(sum%3!=0){
            result=setbit(result,i);
        }
    }
    cout<<result;
}
int main()
{
    int a[10]={1,1,1,2,2,2,3,4,3,3};
    unique(a,10);
    return 0;
}
