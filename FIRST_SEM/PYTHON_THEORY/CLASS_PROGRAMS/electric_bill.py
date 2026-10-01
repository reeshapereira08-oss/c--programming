unit=int(input("enter unit value"))
subject=input("enter commercial or non- commercial;")
if subject=="commercial":
    if unit<=100:
       total=unit*10
    elif unit<=300:
        total=unit*12
    else:
      unit>300
      total=unit*15
      total=total+100

    if subject=="non-commercial":
      if unit<=100:
         total=unit*5
      elif unit<=300:
         total=unit*6
      else:   
         total=unit*8 
         total=total+100

else:
      print("invalid subject")      

print("final amount:",total)
   
    