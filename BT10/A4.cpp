#include<bits/stdc++.h>
using namespace std;
    struct Point {
        double x;
        double y;
        Point (double _x,double _y){
            x=_x;
            y=_y;
        }
    };
    void print(Point& a){
        cout<<&a.x<<" "<<a.y<<endl;
    }
int main (){
    Point A(1,2);
    cout<<&A<<endl;
    print(A);
    }
    //dia chi cua A va A.x la giong nhau.
