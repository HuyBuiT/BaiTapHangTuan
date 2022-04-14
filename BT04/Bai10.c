#include<bits/stdc++.h>
using namespace std;
const int n=5;
bool check (int x1, int y1,int x2,int y2,int n){
    int a=0;
    for(int i =1;i<n;i++){
            if(x1>x2){
        if(x1==x2+i && y1==y2+i ){a++;}
    }
    else {
        if(x2==x1+i && y2==y1+i) {a++;}
    }
    }
    if(a!=0){return true;}
    else return false;
}
bool yes(){
    int a=0;
    for(int i =1;i<n;i++){
        for(int j=1;j<n;j++){
            if(x[i]==x[j] && y[i]!=y[j]){a++;}
            else if (x[i]!=x[j] && y[i]==y[j]){a++;}
            else if (check(x[i],y[i],x[j],y[j],n)){a++;}
        }
    }
}
int main (){
    int x,y;
    cin>>x>>y;
    int a=0,b=0;
    for(int i=1;i<=n;i++){
            cout<<x<<" "<<y<<endl;
            a=x+i;
        for(int j=1;j<=n;j++){
            b=y+j;
            if(a<=n && b<=n){

            }


        }
}
