#include<bits/stdc++.h>
using namespace std;
void IndauCach(int m){
    for(int i =0;i<m;i++){
        cout<<" ";
    }
}
void IndauSao(int n){
    for(int i =0;i<n;i++){
        cout<<"*";
    }
}
int main (){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        IndauCach(n-i-1);
        IndauSao (2*i+1);
        cout<<endl;
    }
}
