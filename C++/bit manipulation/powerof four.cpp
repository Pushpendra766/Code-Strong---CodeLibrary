#include<iostream>
using namespace std;
bool powerof4(int n){
    int count = 0;
    while(n!=1){
        
        n=n>>1;
        count++;
    }
    if(count%2==0)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<powerof4(n);
return 0;
}
