#include<bits/stdc++.h>
using namespace std;
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
int main (){
    int n;
    cin>>n;
    int x[1000],y[1000];
    for(int i =1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    int a=0;
    for(int i =1;i<n;i++){
        for(int j=1;j<n;j++){
            if(x[i]==x[j] && y[i]!=y[j]){a++;}
            else if (x[i]!=x[j] && y[i]==y[j]){a++;}
            else if (check(x[i],y[i],x[j],y[j],n)){a++;}
        }
    }
    if(a!=0){cout<<"YES";}
    else cout<<"NO";
}
