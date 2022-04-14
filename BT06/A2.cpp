#include<bits/stdc++.h>
using namespace std;
double H(int N){
    return H(N-1) + 1.0/N;
}
int main (){
    int n=5;
    cout<<H(n);
}
//loi vi ham de quy thieu base case
