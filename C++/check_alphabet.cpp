#include<iostream>
using namespace std;
void check(char a){
   
    if((a>=65&&a<=97)||(a>=97&&a<=122))
    cout<<"Alphabet";
    else
    cout<<"other";
}
int main()
{
    char a;
    cin>>a;
    check(a);
    return 0;
}
