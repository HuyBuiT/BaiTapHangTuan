#include<iostream>
using namespace std;
int main(){
 int n;
 n=3;
 int a[1000][1000];
 int b=1;
 int c=n*n;
 for(int i=0;b<10;i++){
        int d =n-i-1;
    for(int j =n/2;j<=n/2-1;j=(j+1)% n){
        a[d][j]=b;
        b++;
        cout<<a[d][j]<<" ";
    }
    cout<<endl;

 }
 return 0;
}

