#include<iostream>
using namespace std;
int getbit(int a,int pos){

    return((a&(1<<pos))!=0);
}
void unique(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    int tempxor = xorsum;
    int setbit=0;
    int count=0;
    while(setbit!=1){
        setbit = xorsum & 1;
        count++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(getbit(a[i],count-1))
        newxor=newxor^a[i];
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor);
    
}
int main()
{
    int a[8]={1,2,3,1,2,3,5,0};
    unique(a,8);
    return 0;
}
