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
    void print1 (Point a){
        cout<<&a.x<<" "<<&a.y<<endl;
    }
    void print2 (Point& a){
        cout<<&a.x<<" "<<&a.y<<endl;
    }
int main (){
    Point A(1,2);
    cout<<&A.x<<" "<<&A.y<<endl;
    print1(A);
    print2(A);
    return 0;
}
