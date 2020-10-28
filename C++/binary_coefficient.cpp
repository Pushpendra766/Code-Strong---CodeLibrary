#include<iostream>
using namespace std;
int fact(int a){
    int facto=1;
    for(int i=2;i<=a;i++){
        facto=facto*i;
    }
    return facto;
}
int main(){
    int n,r;
    cin>>n>>r;
    int C=fact(n)/(fact(n-r)*fact(r));
    cout<<C;
    return 0;
}

