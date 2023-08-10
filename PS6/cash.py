
change=-1.0;
while(change<0):
    try :
        change = float(input("Changed Owed: "))

    except ValueError:
        change=-1.0
    
change*=100

quater=int(change/25)
dime=int((change%25)/10)
nickels=int(((change%25)%10)/5)
pennies=int((((change%25)%10)%5))

totalCoins=quater+dime+nickels+pennies

print(totalCoins)

