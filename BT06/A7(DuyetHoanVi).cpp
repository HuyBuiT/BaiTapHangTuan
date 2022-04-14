#include<bits/stdc++.h>
using namespace std;
bool check[100];
int a[100];
string s;
void Hoanvi(int i){
    for(int j=0;j<s.size();j++){
        if(check[j]==0){
            a[i]=j;
             check[j]=1;
            if(i==s.size()){
                for(int k=1;k<=s.size();k++){
                    cout<<s[a[k]];
                }
                cout<<" ";
            }
            else{
                Hoanvi(i+1);
            }
                check[j]=0;

        }
    }
}
int main (){
    cin>>s;
    Hoanvi(1);
    return 0;
}
