#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    string a[100];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=0;
    int b;
    for(int i =1;i<n;i++){
        for(int j =i+1;j<=n;j++){
                int s =a[i].length();
        if(s%2==1){
             reverse(a[j].begin(),a[j].end()) ;
           if(a[i]==a[j]){
                l=a[j].length();
                b=j;
                break;
            }
            }
        }
    }

    cout<<l<<" "<<a[b][(l/2)+1];
}
