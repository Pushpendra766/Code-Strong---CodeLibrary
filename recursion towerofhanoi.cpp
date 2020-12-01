#include<iostream>
using namespace std;
void towerofhanoi(int n,char src,char helper,char dest){
    if(n==0)
    return;
    towerofhanoi(n-1,src,dest,helper);
    cout<<"Moving from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,src,dest);
}
int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}
