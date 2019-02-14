name = input("Enter your name:")
sem = input("Enter your semester:")



str = input("Enter three numbers: ")
str = str.split(' ')
if(len(str) != 3):
    print("Invalid Input")
else:    
    n1 = int(str[0])
    n2 = int(str[1])
    n3 = int(str[2])
    print(n1, n2, n3)
    if(n1>n2 & n1>n3):
        print("%d is the Largest" % n1)
    elif(n2>n3):
        print("%d is the Largest" % n2)
    else:
        print("%d is the Largest" % n3)
        
