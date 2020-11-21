#include<iostream>
using namespace std;

void onecount(int num){
    int ans[num];
    ans[0]=0;
    for(int i=1;i<=num;i++){
     ans[i]=(ans[i/2])+(i%2);
       
    }
    for(int i=0;i<=num;i++)
        cout<<ans[i]<<",";
}
int main()
{
    int num;
    cin>>num;
    onecount(num);
    return 0;
}
