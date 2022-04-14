#include<bits/stdc++.h>
using namespace std;
int main (){
    char c = 'A', d = 'B';
    char* p1 = &c;
    char* p2 = &d;
    char* p3;
    p3 = &d;
    cout << "*p3 = " << *p3 <<", p3 = " << p3 << endl;
    p3 = p1;
    cout << "*p3 = "<< *p3 << ", p3 = " << p3 << endl;
    *p1 = *p2;
    cout<< "*p1 = "<< *p1 << ", p1 = "<< p1 << endl;

}
/* dong 1 in ra B va dia chi cua d
    dong 2 in ra A va dia chi cua c
    dong 3 in ra B va dia chi cua c
