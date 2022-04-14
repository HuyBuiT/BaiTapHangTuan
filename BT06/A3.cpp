#include<bits/stdc++.h>
using namespace std;
double H(int N) {
   if (N == 1) return 1.0;
   return H(N) + 1.0/N;
}
// Loi vi cong thuc de quy thieu hoi quy
int main (){
    int n=5;
    cout<<H(n);
}
