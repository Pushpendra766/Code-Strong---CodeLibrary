#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<=(i-1);k++)
            cout<<" ";
            
        for(int j=1;j<=n;j++)
            cout<<"* ";
        
        cout<<endl;
    }
    return 0;
}
