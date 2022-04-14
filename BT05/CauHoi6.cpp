#include<bits/stdc++.h>
using namespace std;
void f(int x,double y){
cout<<"f(int,double)";
}
void f(double x, int y){
cout<<"f(double,int)";
}
int main (){
f(1.0,2);

}
//goi ham f(1,2) se khong cho ta cai gi vi la (int,int).
