#include<bits/stdc++.h>
using namespace std;
long factorial(long n){
    int x;
    if(n>1)
    x =n*factorial(n-1);
    else
        x=1;
     return x;
}
int main (){
    long n;
    cin>>n;
    long x =factorial(n);
    cout<<"x="<<x<<" at "<<&x<<endl;
}
