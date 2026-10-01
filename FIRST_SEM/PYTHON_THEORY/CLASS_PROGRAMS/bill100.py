unit = int(input("Enter unit value: "))
category = input("Enter commercial or non-commercial: ")
before_due_date = input("Is payment made before due date? (yes/no): ")
total=0
if unit <= 100:
    total = unit * 10
elif unit <= 300:
    total = unit * 12
elif unit >300:
    total = unit * 15





if total<=100:
    total=100
    total*10
elif total<=300:
    total=total-100
    (total*12)+(100*10)
elif total>300:
    total=total-100
    (total*15)+(100*10)-(total*12)

print("subtotal=",total)  
total*10
