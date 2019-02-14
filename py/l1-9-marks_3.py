name = input("Enter your name:")
sem = input("Enter your semester:")

str = input("Enter marks in 6 subjects: ")
str = str.split(' ')
if(len(str) != 6):
    print("Invalid Input")
else:    
    m1 = int(str[0])
    m2 = int(str[1])
    m3 = int(str[2])
    m4 = int(str[3])
    m5 = int(str[4])
    m6 = int(str[5])
    
    total = m1+m2+m3+m4+m5+m6
    avg = total / 6
    
