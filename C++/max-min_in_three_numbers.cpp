#include<iostream>
using namespace std;
void max(int a,int b,int c){
    if(a>b){
        if(a>c)
            cout<<"Max  : "<<a;
         else
            cout<<"Max :"<<c;
        
    }
    else
    {
        if(b>c)
        cout<<"Max : "<<b;
        else
        cout<<"Max : "<<c;
    }
}

void min(int a,int b, int c){
    if(a>b){
        if(b<c)
        cout<<"Min : "<<b;
        else
        cout<<"Min : "<<c;
    }
    else{
        if(a<c)
        cout<<"Min : "<<a;
        else
        cout<<"Min : "<<c;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    max(a,b,c);
    cout<<endl;
    min(a,b,c);
    return 0;
}
