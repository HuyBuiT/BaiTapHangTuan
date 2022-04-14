#include<bits/stdc++.h>
using namespace std;
    struct String{
        int n;
        char *str;
       String(int _n){
            n=_n;
            str=new char[n];
       }
       String(char *_str){
            *str=*_str;
       }
    };

int main (){
    String s('Hello');
    cout<<(*s).str;
    return 0;
}
