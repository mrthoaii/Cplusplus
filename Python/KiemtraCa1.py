#Kiemtra ca1:
'''Viết chương trình tính tiền thuê máy dịch vụ Internet và in ra màn hình kết quả.
Với dữ liệu nhập vào là giờ bắt đầu thuê (GBD), giờ kết thúc thuê (GKT), số máy
thuê (SoMay).

o -  Điều kiện cho dữ liệu nhập: 6&lt;=GBD&lt;GKT&lt;=21. Giờ là số
nguyên.
o -  Đơn giá: 5500đ cho mỗi giờ máy trước 18giờ và 7000đ cho mỗi giờ
máy từ sau 18.'''
def tinhtien(a,b,m):
    gio7=5500*(b-a)
    gio18=(5500*(18-a))+(7000*(b-18))
    if (b<18):return gio7*m
    else:return gio18*m
'''while True :
    GBD=int(input("\nNhap gio bat dau:"))
    GKT=int(input("\nNhap gio ket thuc:"))
    if (GBD<7 or GBD>21 or GKT == GBD or GKT>21 or GKT <7):
        print ("\nGio khong hop le.\nNhap gio trong khoang tu 7-21")
    else :
        print("\nTong so tien ban phai tra :",tinhtien(GBD,GKT,1))
        break'''
'''
kiemtra ca2:
'''
'''Viết chương trình nhập vào số nguyên dương n. Nếu người dùng nhập sai dữ liệu
thì cho nhập lại. In ra màn hình các số hoàn thiện nhỏ hơn n.'''
def kiemtra_hoanthien(a):
    sum=0
    if (a==0):return False
    for i in range (1,a,1):
        if (a%i==0):
            sum+=i
    if (sum==a):
        return True
    return False
def in_hoanthien(a):
    count=0
    for i in range (a):
        if (kiemtra_hoanthien(i)==True):
            print (i,end=" ")
            count+=1
    if (count ==0 ):print ("\nKhong ton tai so hoan thien trong khoang da cho.")
'''while True :
    gioihan=int(input("\nNhap vao gioi han :"))
    if (gioihan<=0):

        print ("\nGioi han ban nhap khong hop le\nNhap lai!!")
    else :
        print ("\nDay so hoan thien :")
        in_hoanthien(gioihan)
        break'''
#Kiemtra ca3
'''
Nhâp̣ số nguyên dương n (0 &lt;= n&lt; 10.000) và in ra cách đọc của n.
'''
def tram(a):
    switcher={
        1: "mot tram",
        2: "hai tram",
        3: "ba tram",
        4: "bon tram",
        5: "nam tram",
        6: "sau tram",
        7: "bay tram",
        8: "tam tram",
        9: "chin tram",
    }
    return switcher.get(a,'')
def chuc(b):
    switcher={
        0:'',
        1: "muoi",
        2: "hai muoi",
        3: "ba muoi",
        4: "bon muoi",
        5: "nam muoi",
        6: "sau muoi",
        7: "bay muoi",
        8: "tam muoi",
        9: "chin muoi",
    }
    return switcher.get(b,"le")
def donvi(c):
    switcher={
        1: "mot ",
        2: "hai ",
        3: "ba ",
        4: "bon ",
        5: "nam ",
        6: "sau ",
        7: "bay ",
        8: "tam ",
        9: "chin ",
    }
    return switcher.get(c,'')
def spell(a,b,c):
    print (tram(a),chuc(b),donvi(c))
'''while True :
    so=int(input("\nNhap so :"))
    if(so <=0 or so>999):
        print("\nSo khong hop le.\nNhap lai.")
    else :
        break
cham = so // 100
ckuc = so % 100 // 10
dvi = so % 100 % 10
if (cham!=0 and ckuc==0 and dvi!=0):
    print(tram(cham),chuc(-1),donvi(dvi))
else :
    spell(cham,ckuc,dvi)'''

'''
Viết chương trình nhập số nguyên dương n. Cho người dùng nhập lại khi nhập sai dữ
liệu. Tính tổng các số nguyên tố nhỏ hơn n.
'''
def kiemtra_nguyento(a):
    if (a==0 or a==1):return False
    if (a==2):return True
    for i in range (2,a,1):
        if (a%i==0):return False
    return True
def tong_nguyento(a):
    sum=0
    for i in range(a):
        if (kiemtra_nguyento(i)==True):
            sum+=i
            print(i,end=" ")
    return sum
'''
while True :
    gioihan_ngto=int(input("\nNhap gioi han tin tong nguyen to:"))
    if (gioihan_ngto<2):
        print("\nGioi han qua ngan!!\nKhong the tinh duoc.\nNhap lai.")
    else:
        print("\nTong so nguyen to be hon ",gioihan_ngto,"la:",tong_nguyento(gioihan_ngto))
        break
'''
#Kiemtra ca2:
'''Viết chương trình tính tiền lương ngày cho công nhân, cho biết trước giờ vào ca, giờ ra
ca của mỗi người.
Biết rằng:
o Tiền trả cho mỗi giờ trước 14 giờ là 50.000đ và sau 14 giờ là 100.000đ.
o Giờ vào ca sớm nhất là 6 giờ sáng và giờ ra ca trễ nhất là 18giờ (Giả sử
giờ
nhập vào nguyên).'''
def tinhtien(a,b):
    gio_6_14=50000*(b-a)
    gio_14_18=(14-a)*50000+(b-14)*100000
    if (b<14):return gio_6_14
    else:return gio_14_18
'''while True :
    gio_in=int(input("\nNhap gio vao ca:"))
    gio_out=int(input("\nNhap gio ra ca :"))
    if (gio_in <6 or gio_in>21 or gio_out<6 or gio_out>21 or gio_in==gio_out):
        print("\nGio khonf hop le\nNhap lai.")
    else:
        print("\nTien mot ngay cong cua ban :",tinhtien(gio_in,gio_out))
        break'''

'''
Viết chương trình nhập vào số nguyên dương n. Người dùng nhập sai dữ liệu thì cho
nhập lại. In ra màn hình n số nguyên tố đầu tiên.
'''
def in_Nnguyento(a):
    i=0
    count=0
    while (a!=count):
        if(kiemtra_nguyento(i)==True):
           print(i,end=" ")
           count+=1
        i+=1

