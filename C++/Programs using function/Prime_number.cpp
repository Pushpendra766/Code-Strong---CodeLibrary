#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a)
{
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)
        return 0;
    }
    return true;
}
int main()
{   
    int a,b;
    cin>>a>>b;
    
    for(int i=a;i<=b;i++){
        if(isPrime(i))
        cout<<i<<" ";
    }
    
    return 0;
}
