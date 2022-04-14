#include<bits/stdc++.h>
using namespace std;
    struct Point {
        double x;
        double y;
    };
    Point C;
    Point mid_point(const Point A,const Point B){
        C.x=(A.x+B.x)/2;
        C.y=(A.y+B.y)/2;
        return C;
    }
int main(){
    Point A,B;
    cin>>A.x>>A.y>>B.x>>B.y;
    Point C=mid_point(A,B);
    cout<<C.x<<" "<<C.y;
    return 0;
}
