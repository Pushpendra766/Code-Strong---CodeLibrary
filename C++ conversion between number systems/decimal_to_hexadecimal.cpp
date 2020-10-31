#include<iostream>
using namespace std;
void convert(string a){
    int num=0,s=1;
    int x=a.size();
    for(int i=x-1;i>=0;i--){
        if(a[i]>='0'&&a[i]<='9')
        num+=s*(a[i]-'0');
        else
        num+=s*(a[i]-'A'+10);
        
        s*=16;
    }
    cout<<num;
}
int main()
{string n;
cin>>n;
convert(n);

    return 0;
}
