#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    int key,flag=0;
    cin>>key;
    int i=0,j=m-1;
    while((i>=0)&&(i<=n-1)&&(j>=0)&&(j<=m-1)){
        if(a[i][j]==key){
            cout<<" Found ";
            flag=1;
            break;
        }
        if(a[i][j]>key)
       j--;
        else
        i++;
    }
    if(flag==0)
    cout<<"Not Found";
    return 0;
    
}
