unit = int(input("Enter unit value: "))
category = input("Enter commercial or non-commercial: ")
before_due_date = input("Is payment made before due date? (yes/no): ")
subtotal=0
# Slab-wise calculation
if unit <= 100:
    total = unit * 10
elif unit <= 300:
    total = unit * 12
elif unit >300:
    total = unit * 15
else:
    total = unit * 12

# Additional surcharge using logical operator
if category == "commercial" and unit > 500:
    surcharge = total * 0.10
    total = total + surcharge

# Discount if payment is before due date
elif before_due_date == "yes":
    discount = total * 0.05
    total = total - discount

print("Total electricity bill =", total)
if total<=100:
    total=100
    total*10
elif total<=300:
    total=total-100
    (total*12)+(100*10)
elif total>300:
    total=total-100
    (total*15)+(100*10)

    print("subtotal=",total)  
    total*10

