#include<iostream>
using namespace std;
void convert(int n){
    int num=0;
    int x=1;
    while(n>0){
        int digit=n%10;
        num=num+x*digit;
        x=x*8;
        n=n/10;
    }
    cout<<num;
}
int main(){
    int n;
    cin>>n;
    convert(n);
    return 0;
}
