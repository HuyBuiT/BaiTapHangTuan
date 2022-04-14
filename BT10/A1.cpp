#include<bits/stdc++.h>
using namespace std;
    struct Point {
        double x;
        double y;
        Point (double _x,double _y){
            x=_x;
            y=_y;
        }
        void print(){
            cout<<x<<" "<<y;
        }
    };
int main (){
    Point A(1,2);
    A.print();
    return 0;
}
