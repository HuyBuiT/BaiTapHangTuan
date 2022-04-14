#include<bits/stdc++.h>
using namespace std;
int main (){
    int m,n;
    cin>>m>>n;
    int hang = m,cot=n;
    int top =1,left=1,right=n,bot=m;
    int pos =1;
    int a[100][100];
    while (pos<=m*n){
        for(int i=left;i<=right;i++){
            a[top][i]=pos;
            pos++;
        }
        top++;
        for(int i =top;i<=bot;i++){
            a[i][right]=pos;
            pos++;
        }
        right--;
        for(int i =right;i>=left;i--){
            a[bot][i]=pos;
            pos++;
        }
        bot--;
        for(int i =bot;i>=top;i--){
            a[i][left]=pos;
            pos++;
        }
        left++;
    }
    for(int i =1;i<=hang;i++){
        for(int j =1;j<=cot;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
