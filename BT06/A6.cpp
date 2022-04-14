#include<bits/stdc++.h>
using namespace std;
int H(int a[1000],int n){
    if(n==0){return 1;}
    else {
        return a[n]+H(a,n-1);
    }
}
int main (){

}
