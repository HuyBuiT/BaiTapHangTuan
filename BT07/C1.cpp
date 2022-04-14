#include<bits/stdc++.h>
#include<ctime>
using namespace std;
    int Cach1(int sum1,int sum2){

        while (sum1<100 || sum2<100){
             int a =rand()%6 +1;
            sum1 =sum1+a;
             int b=rand()%6 +1 ;
            sum2 =sum2+b;
        }
        if (sum1==100){return 1;}
        else if (sum2==100){return 2;}
        else return 3;
    }
    int Cach2(int sum1,int sum2){
            int x =rand()%6 +1;
            sum1=sum1+x;
            int y =rand()%6 +1;
            sum2=sum2+y;
        while (sum1<100 ||sum2<100){
                if(sum1<=sum2){
            int a =rand()%6 +1;
            sum1+=a;}
                if (sum1>sum2){
            int b=rand()%6 +1;
            sum2+=b;}
        }
        if(sum1==100){cout<<"Nguoi 1 thang";}
        else if(sum2==100){cout<<"Nguoi 2 thang";}
        else cout<<"Khong ai thang";
    }
int main (){
    srand(time(0));
    int cach;
    cout<<"Cach choi la:";
    cin>>cach;
    int sum1,sum2;
    sum1 =0;
    sum2=0;
    if(cach==1){
        int result =Cach1(sum1,sum2);
        if (result==1){cout<<"Nguoi 1 thang";}
        else if (result==2){cout<<"Nguoi 2 thang";}
        else cout<<"Khong ai thang";
    }
    if (cach==2){
        Cach2(sum1,sum2);
    }
    return 0;
}
