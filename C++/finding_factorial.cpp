#include<iostream>
using namespace std;
int main()
{  
    int n,factorial=1;
    cin>>n;
    while(n>1)
    {
        factorial*=n;
        n--;
    }
    cout<<factorial;
    return 0;
}
