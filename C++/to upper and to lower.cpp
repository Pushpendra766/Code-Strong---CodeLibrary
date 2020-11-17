#include<iostream>
using namespace std;
int main()
{
    string str="asnHgbtfyBN";
    //to upper
    for(int i=0;i<str.size();i++)
    {
      if(str[i]>='a'&&str[i]<='z')
      str[i]-=32;
    }
    cout<<str;
    //to lower
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&&str[i]<='Z')
        str[i]+=32;
    }
    cout<<endl<<str;
    return 0;
}

