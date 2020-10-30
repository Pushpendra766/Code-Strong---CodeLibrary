#include<iostream>
using namespace std;
void convert(int n){
    int number=0;
    int x=1;
   while(n>0){
       int digit=n%10;
       number+=digit*x;
       x=x*2;
       n=n/10;
       
       
   }
   cout<<number;
}
int main(){
    int n;
    cin>>n;
    convert(n);
    return 0;
}
