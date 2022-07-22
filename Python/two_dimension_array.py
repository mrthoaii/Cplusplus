def array_2D_in(array,row,col):
    for i in range(row):
        col_row=[]
        for j in range(col):
            x=int(input("\nNhap phan tu mang :"))
            col_row.append(x)
        array.append(col_row)
def array_2D_out(array):
    for i in range(len(array)):
        for j in range(len(array[i])):
            print (array[i][j],end="\t")
        print("\n")
def sum_array_2D(array):
    #tong duong cheo chinh
    sum=0
    for i in range(len(array)):
        for j in range (len(array[i])):
            if (i==j):
                sum+=array[i][j]
    return sum
def kiemtra_ngto(a):
    if (a==0 or a==1):return False
    if(a==2):return True
    for i in range(2,a,1):
        if (a%i==0):return False
    return True
def in_ngto(array):
    for i in range(len(array)):
        for j in range(len(array[i])):
            if (kiemtra_ngto(array[i][j])==True):
                print (array[i][j],end=" ")
array=[]
array_2D_in(array,3,3)
array_2D_out(array)
print(sum_array_2D(array))
print("\nSo nguyen to trong mang hai chieu:")
in_ngto(array)