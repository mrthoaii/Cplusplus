from time import sleep
def count_down ():
    for i in range(10,0,-1):
        print (i,end="  ")
        sleep(1)
    print ("\nBUMMMMMMMMMM")
def exit_program():
    while True :
        print ("\nHellooooo")
        x=input("\nTIep tuc khong (y/n)")
        if (x=='n'):
            print("bye")
            exit()

def handle(f, x):
    return f(x)
kq1 = handle(lambda x: x**2, 9)
print("kq1 = ", kq1)
kq2 = handle(lambda x: x % 2 == 0, 4)
print("kq2 = ", kq2)