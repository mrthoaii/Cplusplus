def array(a):
    for i in range (6):
        x=int(input("\nNhap phan tu mang :"))
        a.append(x)
def out_array(a):
    for i in range(len(a)):
        print (a[i],end=" ")
def remove(a,x):
        if(a==x):
            return True
def remove_arg(a,x):
    while(x in a):
        a.remove(x)
lst=[]
array(lst)
out_array(lst)
remove_arg(lst,5)
print("\nMang sau khi xoa:")
out_array(lst)