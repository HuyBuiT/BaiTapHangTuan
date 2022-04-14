#include<iostream>

using namespace std;
void TinhLuong(int soGio, int &Tien){
     if(soGio>200){
        Tien = (soGio-200)*25+100*12+50*16+50*20;
    }
    else if(soGio>150){
        Tien =(soGio-150)*20+100*12+50*16;
    }
    else if (soGio>100){
        Tien = (soGio-100)*16+100*12;
    }

}
double TinhThue(int Tien){
        double Thue;
        double BaoHiem = (Tien*9)/100;
        double TienChiuThue = Tien - BaoHiem;
        if(TienChiuThue >200){
            Thue = ((TienChiuThue -200)*20 +50*15+50*10)/100;
        }
        else if (TienChiuThue>150){
            Thue =((TienChiuThue-150)*15+50*10)/100;
        }
        else Thue = ((TienChiuThue-100)*10)/100;
        return Thue;
}
int main()
{
    int soGio,Tien;
    cin>>soGio;
    TinhLuong(soGio,Tien);
    cout<<Tien<<"000"<<endl;
    cout<<"Tien Thue la :"<<TinhThue(Tien)<<"000"<<endl;
    double Thue =TinhThue(Tien);
    cout<<"Thu nhap la:"<<Tien-Thue<<"000";
    return 0;
}
