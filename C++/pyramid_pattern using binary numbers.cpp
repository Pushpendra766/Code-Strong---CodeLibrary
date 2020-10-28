#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        if((i+j)%2==0)
        cout<<"1 ";
        else
        cout<<"0 ";
        }
        cout<<endl;
    }
    /* ------OR------
    bool a;
    for(int i=1;i<=n;i++)
    {
        a=1;
        for(int j=1;j<=i;j++)
       { if(i%2==0)
        {a=!a;
        cout<<a<<" ";
        
        }
        else
        {
        cout<<a<<" ";
        a=!a;
        }
       }
       cout<<endl;
    }*/
    
    return 0;
}
