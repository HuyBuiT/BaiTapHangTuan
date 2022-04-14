#include<bits/stdc++.h>
using namespace std;
void in (int a[],int n){
    for (int i =1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void xep(int a[],int n,int vt){
for(int i =vt;i<n;i++){
    for(int j =i+1;j<=n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
}
}
int main (){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<=n;i++){
        a[i]=i;
    }
    in(a,n);
    while (true){
        int i;
        for( i =n;i>0;i--){
            if(i==1){
                return 0;
            }
                if (a[i-1]<a[i]) break;
            }
        for(int j=n;j>=i;j--){
            if(a[j]>a[i-1]){
                swap(a[j],a[i-1]);
                //xep(a,n,i);
                sort(a+i,a+n+1);
                in(a,n);
                break;
            }
        }
    }
}
