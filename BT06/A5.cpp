#include<bits/stdc++.h>
using namespace std;
long F(int n) {
   if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);
}
int main (){
    int n;
    cin>>n;
    clock_t begin = clock();
    int s =F(n);
    clock_t end = clock();
    double elapsedSecs = double(end - begin) / CLOCKS_PER_SEC;
    cout<<s<<" "<<elapsedSecs;
}
