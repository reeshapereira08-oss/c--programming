
day=(input("enter week day"))
time=(input("enter time"))
age=(int(input("enter your age")))

base_ticket_price =250;

if day == "saturday" or day =="sunday":
        ticket_price=base_ticket_price+(base_ticket_price*25/100)
if time == "morning":
    ticket_price=ticket_price
elif time == "after":
    ticket_price=ticket_price(ticket_price*10/100)
else:
  ticket_price=ticket_price(ticket_price*30/100)
if age<5:
   print("child")
   ticket_price=ticket_price-(ticket_price*50/100)  
elif age>=6 & age<=59:
 print("adult")
else:
 age>60 
 print("senior citizen")
ticket_price=ticket_price-(ticket_price*10/100)
print(ticket_price)

    

















