#include<iostream>
using namespace std;
int main()
{
    int row ,column;
    cin>>row>>column;
    for(int i=0;i<row;i++)
    {  
        cout<<endl;
        for(int j=0;j<column;j++)
        cout<<"*";
    }
    return 0;
}
