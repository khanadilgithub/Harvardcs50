
cardnum=-1;
while(cardnum<0):
    try :
        usrinput = input("Enter Card Number: ") #exception handlingthe value error due to bad user input
        cardnum= int(usrinput)

    except ValueError:
        cardnum=-1.0

size=len(usrinput) #user input size 
sum1=0 
sum2=0

#Function to calculate sum of digits by mutiplying 2 starting forn second last
def sumofmultple(): 
     if(size%2==0):
        for i in range(0,size,2):
            if(int(usrinput[i])<5):
                sum1+=int(usrinput[i])*2
                sum1+=int(usrinput[i+1])

            else:
                sum1+=(int(usrinput[i])*2)%10
                sum+=1
                sum1+=int(usrinput[i+1])

     else:
        for i in range(1,size,2):
            if(int(usrinput[i])<5):
                sum1+=int(usrinput[i])*2

            else:
                sum1+=(int(usrinput[i])*2)%10
                sum1+=1
     return sum1

#Function to calculate sum of remaining digits
def digitSum():
    
    if(size%2==0):
        for i in range(1,size,2):
            sum2+=int(usrinput[i+1])

    else:
        for i in range(0,size,2):
            sum2+=int(usrinput[i])
  

#Function to validate credit card number using Luhn's Algoritm
def checkSum():
    if((sum1+sum2)%10==0 and size==15 and int(usrinput[0])==3):
        print("AMEX")
    elif((sum1+sum2)%10==0 and int(usrinput[0])==4 and (size==16 or 13) ):
        print("VISA")
    elif((sum1+sum2)%10==0 and size==16 and int(usrinput[0])==5):
        print("MASTERCARD")
    else:
        print("Invalid")

checkSum()