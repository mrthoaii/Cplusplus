import random
import math
#Swap number in List
#approach1:
#   Find the length of the list and simply swap the first element with (n-1)th element.
#approach2:
#   The last element of the list can be referred as list[-1]. Therefore, we can simply swap list[0] with list[-1].
#approach3:
#    Swap the first and last element is using tuple variable
#approach4:
#   Using * operand.
#approach5:
#
def in_list(a,n):
    for i in range (n):
        x=random.randint(1,50)
        a.append(x)
def out_list(a):
    print("\nThong tin list:")
    for i in range (len(a)):
        print(a[i],end=" ")
def swap_first_last(a):
    temp = a[0]
    a[0] = a[len(a)-1]
    a[len(a)-1] = temp
def swap_member(a,m,n):
    #m,n is position which U want to swap
    a[m],a[n]=a[n],a[m]
    return a
#swap using pop() and insert ()
def swap_usingFunc(a,m,n):
    Fisrt_val=a.pop(m)
    Second_val=a.pop(n-1)
    a.insert(m,Second_val)
    a.insert(n,Fisrt_val)
def sort_list(a):
    a.sort()
    return a
def sort_C(a):
    for i in range (len(a)):
        for j in range (i+1,len(a),1):
            if ()
lst=[]
in_list(lst,5)
print("_"*7,"Du lieu List","_"*7)
out_list(lst)
print ("\nFunction called")
print("\nList sau khi doi vi tri dau cuoi: ")
(swap_first_last(lst))
out_list(lst)
print("\nList sau khi doi vi tri :")
swap_member(lst,1,4)
out_list(lst)
print("\nList sau khi doi vi tri :")
swap_usingFunc(lst,1,4)
out_list(lst)
print("\nList after sorted ",sort_list(lst))
