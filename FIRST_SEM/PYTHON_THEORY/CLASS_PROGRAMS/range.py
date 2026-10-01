n=int(input("enter n value"))
for number in range(n-1,1,-1):
 count=0
 for i in range(1, number+1):
    if number%i==0:
        count=count+1
        if count ==2:
           print(number)
           break