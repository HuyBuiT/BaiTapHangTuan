#include<bits/stdc++.h>
using namespace std;
int sumleft(int a[],int j){
    if(j==0){
        return 0;
    }
    else {
            int sum =0;
        for(int i=0;i<j;i++){
            sum = sum +a[i];
        }
        return sum;
    }
}
int sumright (int a[],int j,int n){
    if(j==n-1){
        return 0;
}
    else {
            int sum=0;
        for(int i=j+1;i<n;i++){
            sum =sum+a[i];
        }
    return sum;
    }
}
int main (){
int T;
cin>>T;
int n[100];
int a[100000];
    for(int i =0;i<T;i++){
        cin>>n[i];
        for(int j=0;j<n[i];j++){
            cin>>a[j];
        }
    }

for(int i =0;i<T;i++){
        int c=0;
    for(int j=0;j<n[i];j++){
        if(sumleft(a,j)==sumright(a,j,n[i])){c++;}
    }
    if(c!=0){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
}
}
