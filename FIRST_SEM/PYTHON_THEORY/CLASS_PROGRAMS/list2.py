#need to process a single students data :-name ,rollnumber,phone,email,5 subject make and get the subject tottal 
#implimented using nested list 

name = input("Enter student name: ")
rollnumber = int(input("Enter roll number: "))
email = input("Enter email: ")
phone = int(input("Enter phone number: "))

marks1 = int(input("Enter marks for subject 1: "))
marks2 = int(input("Enter marks for subject 2: "))
marks3 = int(input("Enter marks for subject 3: "))
marks4 = int(input("Enter marks for subject 4: "))
marks5 = int(input("Enter marks for subject 5: "))

student_data = [name, rollnumber, email, phone,
                [marks1, marks2, marks3, marks4, marks5]]

print("\nStudent Data:", student_data)

total = sum(student_data[4])
print("Total Marks:", total)