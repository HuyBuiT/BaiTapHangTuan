#include<bits/stdc++.h>
using namespace std;
void f(int a[100]){
    cout<<&a[0]<<" "<<&a<<" ";
}
int main (){
    int a[100];
    cout<<&a[0]<<" "<<&a<<endl;;//in ra tu ham main dia chi cua bien ham va phan tu dau tien trong ham BANG nhau
    f(a);//in ra tu ham main dia chi cua bien ham va phan tu dau tien trong ham KHAC nhau
}
