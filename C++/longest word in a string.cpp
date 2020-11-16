#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n+1);
    cin.ignore();
    int i=0,counter=0,maxn=INT_MIN;
    int st;
    while(arr[i]!='\0')
    {
        if(arr[i] ==' ')
        counter=0;
        else
        counter++;
        if(counter>maxn){
            maxn=counter;
            st=i;
        }
        
        i++;
    }
    for(int j=st-maxn+1;j<=(st);j++)
    cout<<arr[j];
    cout<<endl<<maxn;
    return 0;
}

