height = int(input ("Enter Hieght: "))

for i in range(height+1):
    print((height-i)*" ", end="")
    print(i*"#" )