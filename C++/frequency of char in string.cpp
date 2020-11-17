#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str=" asjhdgwygdgdgadgasysxgdskk";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    int maxfreq=0;
    char ans='a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            ans=i+'a';
        }
    }
    cout<<ans<<" "<<maxfreq;
    return 0;
}
