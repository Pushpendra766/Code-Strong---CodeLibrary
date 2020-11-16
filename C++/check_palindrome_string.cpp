#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    int flag;
    int i=0,j=n-1;
    while(i<j){
        if(a[i]==a[j]){
            flag=1;
            
        }
        else{
            flag=0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1)
    cout<<" Palindrome";
    else
    cout<<" Not Palindrome";
    return 0;
}

