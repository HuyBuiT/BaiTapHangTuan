#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[10][10];

    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(j==1){a[i][j]=1;}
            else if(j==i){a[i][j]=1;}
            else if(i>j){a[i][j]=a[i-1][j-1]+a[i-1][j];}
            else a[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]!=0){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
