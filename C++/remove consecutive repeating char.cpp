#include<iostream>
using namespace std;
int main()
{
    string str="assdhhjhuujchhhjkjj";
    int n=str.size();
    char ans[n];
    int ctr=1;
    ans[0]=str[0];
    for(int i=1;i<n;i++){
        if(str[i]!=str[i-1]){
        ans[ctr]=str[i];
        ctr++;
        }
    }
    cout<<ans;
    return 0;
}
