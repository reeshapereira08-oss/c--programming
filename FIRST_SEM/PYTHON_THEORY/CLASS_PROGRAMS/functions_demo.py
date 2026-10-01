    
total=0
percentage=0
marks_sub1=0
marks_sub2=0
marks_sub3=0
name=""
roll_number=0
def studentdetails():
    global name,roll_number,marks_sub1,marks_sub2,marks_sub3
    pass
    name=(input("enter name :"))
    roll_number=(int(input("enter roll number:")))
    marks_sub1=(int(input("subject1:")))
    marks_sub2=(int(input("subject2:")))
    marks_sub3=(int(input("subject3:")))
def findtotal():
    global total
    total=marks_sub1+marks_sub2+marks_sub3
    print("total marks =",total)
    pass
def findaverage():
    average=total/3
    print("average marks=",average)
    pass
def findpercentage():
    global percentage
    percentage=(total/300)*100
    print("percentage=",percentage)
    pass
def findgrarde():
    if (percentage<45):
        print("4th class")
    elif(percentage>45 and percentage<=60):
        print("3rd class")
    elif(percentage>61 and percentage<=75):
        print("2nd class")
    elif(percentage>=76 and percentage<=85):
        print("1st class")
    else:
        print("distinction")
        pass
for i in range(1,4):
    studentdetails()
    findtotal()
    findaverage()
    findpercentage()
    findgrarde()        


        
