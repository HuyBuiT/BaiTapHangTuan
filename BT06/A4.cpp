#include<bits/stdc++.h>
using namespace std;
double H(int N) {
   if (N == 1) return 0.0;
   return H(N-1) + 1.0/N;
}
// loi vi de quy qua sau va so qua lon
int main (){
    int n=50000;
    cout<<H(n);
}
