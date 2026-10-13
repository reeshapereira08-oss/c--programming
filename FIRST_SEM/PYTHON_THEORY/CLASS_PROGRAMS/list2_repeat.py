
n = int(input("Enter number of students: "))

students = []

for i in range(n):
    print("\nEnter details of student", i + 1)

    name = input("Enter name: ")
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

    students.append(student_data)

print("\n--- STUDENT DETAILS ---")

for student_data in students:
    print("\nName:", student_data[0])
    print("Roll Number:", student_data[1])
    print("Email:", student_data[2])
    print("Phone:", student_data[3])
    print("Subject Marks:", student_data[4])
    print("Total Marks:", sum(student_data[4]))