#include<bits/stdc++.h>
using namespace std;
int check(int i,int j,char c[1000][1000],int a,int b){
    int dem =0;
    for(int k=i-1;k<=i+1;k++ ){
        for(int l=j-1;l<=j+1;l++){
            if(k<1 || k>a || l<1 ||l>b){c[k][l]='@';}

                if(c[k][l]=='*'){dem++;}
            }
        }
    return dem;
    }


int main(){
    int a,b;
    cin>>a>>b;
    char c[1000][1000];
    for(int i=1;i<=a;i++){
        for(int j =1;j<=b;j++){
            cin>>c[i][j];
        }
    }
    for(int i=1;i<=a;i++){
        for(int j =1;j<=b;j++){
                if(c[i][j]=='*'){cout<<c[i][j]<<" ";}
                else {
           int h =check(i,j,c,a,b);
           cout<<h<<" ";
        }
    }
        cout<<endl;
    }
}
