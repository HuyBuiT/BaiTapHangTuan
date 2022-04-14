#include<bits/stdc++.h>
using namespace std;
int ran(int n){
    int s =rand();
    if(s<n){
        return s;
    }
    else (ran(n));
}
int main (){
srand(time(0));
int n;
cin>>n;
cout<<ran(n);
}
