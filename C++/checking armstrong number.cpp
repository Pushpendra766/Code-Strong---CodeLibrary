#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int original_n=n;
    
    while(n>0)
    {
        int digit=n%10;
        sum+=pow(digit,3);
        n=n/10;
    }
    if(sum==original_n)
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";
    
    return 0;
    
}
