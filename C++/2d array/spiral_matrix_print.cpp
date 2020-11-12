#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
    while(row_start<=row_end && col_start<=col_end){
        //for first row
        for(int i=col_start;i<=col_end;i++)
        cout<<a[row_start][i]<<" ";
        row_start++;
        
        //for last column
        for(int i=row_start;i<=row_end;i++)
        cout<<a[i][col_end]<<" ";
        col_end--;
        
        //for last row
        for(int i=col_end;i>=col_start;i--)
        cout<<a[row_end][i]<<" ";
        row_end--;
        
        //for first column
        for(int i=row_end;i>=row_start;i--)
        cout<<a[i][col_start]<<" ";
        col_start++;
        
        
    }
    return 0;
}
