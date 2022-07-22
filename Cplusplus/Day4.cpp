#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
struct TTNV{
    char ten[50];
    char msnv[15];
    float sogio;
    float tien_gio;
    double tongluong;
};
void nhap(TTNV &a){
    cout<<"\nNhap vao msnv:";cin.getline(a.msnv,15);
    cout<<"\nNhap vao ho ten nhan vien :";cin.getline(a.ten,50);
    cout<<"\nBan lam bao nhieu gio trong thang nay :";cin>>a.sogio;
    cout<<"\nSo tien moi gio :";cin>>a.tien_gio;
    a.tongluong=a.tien_gio*a.sogio;
    
}
void xuat(TTNV a){
    cout<<"\nTen:"<<a.ten;
    cout<<"\nMa so nhan vien :"<<a.msnv;
    cout<<"\nGio lma viec:"<<a.sogio;
    cout<<"\nTi le tra tien theo gio:"<<a.tien_gio;
    cout<<"\nTong luong cua ban:"<<a.tongluong;
}
struct TTSV{
    char hoten[50];
    char mssv[15];
    char gioitinh[5];
    int tuoi;
    float dToan,dLy,dHoa;
    double dTB;
};
void nhap_sv(TTSV &a){
    cin.ignore();
    cout<<"\nNhap ho va ten SV:";cin.getline(a.hoten,50);
    cout<<"\nNhap mssv:";cin.getline(a.mssv,15);
    cout<<"\nNhap gioi tinh :";cin.getline(a.gioitinh,5);
    cin.ignore();
    do{
        cout<<"\nNhap tuoi:";cin>>a.tuoi;
        if(a.tuoi<1){
            cout<<"\nTuoi khong hop le .\nVui long nhap lai.";
            cout<<"\nNhap tuoi:";
            cin>>a.tuoi;
        }
    }while(a.tuoi<1);
    do {
        cout<<"\nNhap diem Toan Ly Hoa:";cin>>a.dToan>>a.dLy>>a.dHoa;
        if (a.dToan > 10 || a.dHoa >10 || a.dLy>10 || a.dToan<0 || a.dLy<0 || a.dHoa<0){
            cout<<"\nDiem khong hop le.\nVui long nhap lai .";
            cout<<"\nNhap diem Toan Ly Hoa:";
            cin>>a.dToan>>a.dLy>>a.dHoa;
        }
    }while(a.dToan > 10 || a.dHoa >10 || a.dLy>10 || a.dToan<0 || a.dLy<0 || a.dHoa<0);
    a.dTB=(a.dToan+a.dLy+a.dHoa)/3;
}
void xuat_sv(TTSV a){
    cout<<"\nHo va ten :"<<a.hoten;
    cout<<"\nGioi tinh :"<<a.gioitinh;
    cout<<"\nMssv:"<<a.mssv;
    cout<<"\nTuoi:"<<a.tuoi;
    cout<<"\nDiem Toan_Ly_Hoa:"<<a.dToan<<" "<<a.dLy<<" "<<a.dHoa;
    cout<<"\nDiem trung binh :"<<a.dTB;
}
void nhapN_sv(TTSV a[],int n){
    for (int i=0;i<n;i++){
        cout<<"\nNhap thong tin sinh vien thu "<<i+1;
        nhap_sv(a[i]);
    }
}
void xuatN_sv(TTSV a[],int n){
    for(int i=0;i<n;i++){
        cout<<"\nThong tin sinh vien thu "<<i+1;
        xuat_sv(a[i]);
        cout<<endl;
    }
}
void xeploai_dTB(TTSV a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i].dTB<a[j].dTB){
                TTSV temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void xeploai_SV(TTSV a[],int n){
    for(int i=0;i<n;i++){
        if (a[i].dTB>=8.5)cout<<"\nXep loai sinh vien thu "<<i+1<<": Gioi";
        else if (a[i].dTB>=6.5)cout<<"\nXep loai sinh vien thu "<<i+1<<": Kha";
        else if (a[i].dTB>=5)cout<<"\nXep loai sinh vien thu "<<i+1<<": Trung Binh";
        else cout<<"\nXep loai sinh vien thu "<<i+1<<": Yeu";
    }
}
void timkiem_ten(TTSV a[],int n){
    cin.ignore();
    char ten_timkiem[50];
    int count=0;
    cout<<"\nNhap ten ban muon tim kiem :";
    cin.getline(ten_timkiem,50);
    for(int i=0;i<n;i++){
        if (strcmp(a[i].hoten,ten_timkiem)==0){
            cout<<"\n\t====Ten ban can tim:====";
            xuat_sv(a[i]);
            count++;
        }
    }
    if (count ==0)cout<<"\nTen ban tim khong ton tai .";
}
int main (){
    cout<<fixed<<showpoint<<setprecision(2);
    TTSV *sv;
    int soluong;
    cout<<"\nNhap so luong sinh vien :";cin>>soluong ;
    sv=new TTSV[soluong];
    nhapN_sv(sv,soluong);
    cout<<"__________Thong tin sinh vien__________";
    xuatN_sv(sv,soluong);
    cout<<"\n=====xep loai sinh vien=====";
    xeploai_SV(sv,soluong);
    cout<<"\n=====sap xep diem=====";
    xeploai_dTB(sv,soluong);
    xuatN_sv(sv,soluong);
    timkiem_ten(sv,soluong);
    delete[]sv;
}