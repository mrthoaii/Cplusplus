#include<iostream>
#include<fstream>
using namespace std;
void nhapFile(){
    ofstream a;
    a.open("Filetxt.txt");
    a<<"\nDanh sach so chan :\n";
    int count=0;
    for(int i=0;i<=40;i++){
        if (i%2==0){
            a<<i<<"\t";
            count++;
        }
        if(count %5==0)a<<endl;
    }
    cout<<"\nSo chan:"<<count;
    a<<"\nDanh sach so le :\n";
    int count_le=0;
    for(int i=0;i<=40;i++){
        if (i%2!=0){
            a<<i<<"\t";
            count_le++;
        }
        if(count_le %5==0)a<<endl;
    }
    cout<<"\nSo le :"<<count_le;
    a.close();
}
void file_matran(int *a){
    ifstream fin;
    int n;
    fin.open("File.txt");
    fin>>n;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            fin>>*(a+i*n+j);
            cout<<*(a+i*n+j)<<" ";
        }
        cout<<endl;
    }
    fin.close();
}
void file_string(int a,float b,char *c,char *d){
    cout<<"\nNhapvao snguyen:";cin>>a;
    cout<<"\nNhapvao sthuc:";cin>>b;
    cin.ignore();
    cout<<"\nNhapvao kitu khong ktrang:";cin.getline(c,50);
    cout<<"\nNhapvao kitu co kkhoang cach:";cin.getline(d,50);
    ofstream fout;
    fout.open("FileString.txt");
    fout<<a<<"\n";
    fout<<b<<"\n";
    fout<<c<<"\n";
    fout<<d<<"\n";
    
    fout.close();
}
void out_file_string(int a,float b,char *c,char *d){
    ifstream fin;
    int i=0;
    fin.open("FileString.txt");
    fin>>a;cout<<a<<"\n";
    fin>>b;cout<<b<<"\n";
    fin>>c;cout<<c<<"\n";
    while(fin>>d){
        cout<<d<<" ";
    }

}
void nhap_matran(int **a,int n){
    ofstream fout;
    fout.open("File.txt");
    fout<<n<<"\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                *(*(a+i)+j)=rand()%50;
                fout<<*(*(a+i)+j)<<"\t";
            }
            fout<<endl;
        }
        cout<<"\nDa ghi xong \n";
    fout.close();

ifstream fin;
    fin.open("File.txt");
    fin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                fin>>*(*(a+i)+j);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<*(*(a+i)+j)<<"\t";
            }
            cout<<endl;
        }
    fin.close();
}

int main(){
    int soluong;cout<<"\nNhap so luong :";cin>>soluong;
    int **dimension_array;
    dimension_array=new int*[soluong];
    for(int i=0;i<soluong;i++){
        dimension_array[i]=new int[soluong];
    }
    nhap_matran(dimension_array,soluong);
    delete []dimension_array;
}