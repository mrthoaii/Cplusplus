#chuyen doi gio phut giay
import math
import random
def chuyendoi(a,b,c):
    return (a*3600+b*60+c)
def chuyendoigio(a):
    gio=a//3600
    phut=a%3600//60
    giay=a%3600%60
    return gio,' gio',phut,' phut',giay,' giay'
def hieu_so(a,b):
    return (a-b)
def tong_so(a,b):
    return (a+b)
def thuong_so(a,b):
    return (a/b)
def tich_so(a,b):
    return a*b
def TBC(a,b,c,d):
    return (a+b+c+d)/4
def ktra_tamgiac(a,b,c):
    if (a+b>c or a+c>b or b+c>a):
        return True
    return False
def chuvi_tamgiac(a,b,c):
    if (ktra_tamgiac(a,b,c)==True):
        return a+b+c
    print ("Tam giac khong hop le .")
def dientich_tamgiac(a,b,c):
    return math.sqrt((a+b+c)*(a-b+c)*(a+b-c)*(b+c-a))
def chuvi_hcn(a,b):
    return (a+b)*2
def dientich_hcn(a,b):
    return a*b
def chuvi_hinhtron(a):
    return a*2*math.pi
def dientich_hinhtron(a):
    return a*a*math.pi
def chuvi_hvuong (a):
    return a*4
def dientich_hvuong(a):
    return a*a
def kiemtra_nguyento(a):
    if (a==0 or a==1):return False
    if (a==2):return True
    for i in range (2,a):
        if (a%i==0):
            return False
    return True
def kiemtra_chinhphuong(a):
    if (a<0 or a==0):return False
    else:
        b = math.sqrt(a)
        if(b-(int)(math.sqrt(a))==0):
            return True
        else :
            return False
def mang_chinhphuong(a):
    count = 0
    for i in range(len(a)):
        if (kiemtra_chinhphuong(a[i]) == True):
            print(a[i], end=" ")
            count += 1
    if (count == 0): print("\nKhong ton tai so chinh phuong trong list.")
def in_nguyento(a):
    print("\nDanh sach so nguyen to nho hon ",a," :")
    for i in range (a):
        if (kiemtra_nguyento(i)==True ):
            print (i,end=' ')
def in_chinhphuong(a):
    count =0
    i=0
    while (count != a) :
        if (kiemtra_chinhphuong(i)==True):
            print (i,end=" ")
            count +=1
        i+=1
def kiemtra_hoanthien(a):
    sum=0
    if (a==0 or a==1):return False
    for i in range(1,a):
        if (a%i==0):
            sum+=i
    if(sum==a):return True
    else: return False
def in_sohoanthien(a):
    for i in range(a):
        if(kiemtra_hoanthien(i)==True):
            print (i,end=" ")
def in_array(a,n):
    for i in range(n):
        x=random.randint(-50,50)
        a.append(x)
def out_array(a):
    for i in range(len(a)):
        print(a[i],end=" ")
def mang_nguyento(a):
    count=0
    for i in range(len(a)):
        if (kiemtra_nguyento(a[i])==True):
            print (a[i],end=" ")
            count+=1
    if(count == 0):print("\nKhong ton tai so nguyen to trong list.")

def mang_hoanthien(a):
    count = 0
    for i in range(len(a)):
        if (kiemtra_hoanthien(a[i]) == True):
            print(a[i], end=" ")
            count += 1
    if (count == 0): print("\nKhong ton tai so hoan thien trong list.")
def mang_chinhphuong_vitrile(a):
    count=0
    for i in range (len(a)):
        if (kiemtra_chinhphuong(a[i])==True and i%2!=0 and i!=0):
            print(a[i],end=" ")
            count+=1
    if (count == 0):print ("\nKhong ton tai so chinh phuong nam o vi tri le .")
def timkiemX_cuoicung(a,x):
    for i in range (len(a)-1,0,-1):
        if (a[i]==x):
            return i
def lapnhau_AB(a,b):
    for i in range (len(b)):
        if (a==b[i]):
            return False
    return True
def kiemtra_lap_khac(a,b):
    for i in range(len(a)):
        if (lapnhau_AB(a[i],b)==True):
            print (a[i],end=" ")
def kiemtra_lap_giong(a,b):
    for i in range(len(a)):
        if (lapnhau_AB(a[i],b)==False):
            print (a[i],end=" ")
lstA=[]
lstB=[]
print("\nNhap mang A:")
in_array(lstA,10)
print("\nNhap mang B:")
in_array(lstB,5)
out_array(lstA)
print("\n")
out_array(lstB)
print('\nPrint function')
mang_chinhphuong(lstA)
