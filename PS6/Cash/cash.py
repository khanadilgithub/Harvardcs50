
change=-1.0;
while(change<0):
    try :
        change = float(input("Changed Owed: ")) #exception handlingthe value error due to bad user input

    except ValueError:
        change=-1.0
    
change*=100 #converting dollar into cents

quater=int(change/25) #no of quatres
dime=int((change%25)/10) #no of dime
nickels=int(((change%25)%10)/5) # no of nickels
pennies=int((((change%25)%10)%5)) # no of pennies

totalCoins=quater+dime+nickels+pennies #total no of coins

print(totalCoins)

