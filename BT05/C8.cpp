#include<bits/stdc++.h>
using namespace std;
int LamTron(double a){
string s =to_string(a);
int pos=s.find('.');
string n =s.substr(pos+1,1);
int sum = stoi(n);
string f =s.substr(0,pos);
int fi =stoi(f);
if(sum>=1455){
    return fi+1;
}
else return fi;
}
int main (){
double a;
cin>>a;
cout<<LamTron(a);
}
