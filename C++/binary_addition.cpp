#include<iostream>
using namespace std;
void reverse(int n){
    int num=0;
    while(n>0){
        int digit=n%10;
        num=num*10+digit;
        n/=10;
    }
    cout<<num;
}
void add(int a,int b){
    int num=0;
    int carry=0;
    while(a>0&&b>0){
        if(a%10==0&&b%10==0){
             if(carry==1)
            {
            num=num*10+1;
            carry=0;
            }
            else
            {
                num=num*10;
                carry=0;
            }
        }
        else if(a%10==1&&b%10==0||a%10==0&&b%10==1){
            if(carry==1)
            {
            num=num*10;
            carry=1;
            }
            else
            {
                num=num*10+1;
                carry=0;
            }
        
        }
        else 
        {
            if(carry==1)
            {
            num=num*10+1;
            carry=1;
            }
            else
            {
                num=num*10;
                carry=1;
            }
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(a%10==1){
         if(carry==1){
            num=num*10;
            carry=1;
         }
         else{
             num=num*10+1;
             carry=0;
         }
         
             
         
        }
        else{
            if(carry==1){
                num=num*10+1;
                carry=0;
                
            }
            else{
                num=num*10;
                carry=0;
            }
        }
        a/=10;
    }
    
    while(b>0){
        if(b%10==1){
         if(carry==1){
            num=num*10;
            carry=1;
         }
         else{
             num=num*10+1;
             carry=0;
         }
         
             
         
        }
        else{
            if(carry==1){
                num=num*10+1;
                carry=0;
                
            }
            else{
                num=num*10;
                carry=0;
            }
        }
        b/=10;
    }
    num = (num*10) + carry;
    reverse(num);
    
}

int main()
{
    int a,b;
    cin>>a>>b;
    add(a,b);
    return 0;
}
