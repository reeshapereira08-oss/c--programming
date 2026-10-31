#collect employees name,emp number,company name ,salary (store in set and dictinary)
emp_name=[]
emp_no=[]
company=[]
salary=[]
email=[]
phone=[]

for i in range(3):
   print("\nEnter details of employess", i + 1)
   

   emp_name=input("enter employee name:")
   emp_no=int(input("enter employee number:"))
   company=input("enter company name:")
   salary=float(input("enter salary:"))
   email=input("enter email id:")
   phone=int(input("enter phone no:"))

employee_set={emp_name[i],emp_no[i],company[i],salary[i]}
employee_set.add(email[i])
employee_set.add(phone[i])

employee_dict={
    "Name":emp_name[i],
    "Employee Number":emp_no[i],
    "Company Name":company[i],
    "Salary":salary[i],
    "Email":email[i],
    "Phone":phone[i],
}
print("\nEmployee Details Using set:")
print(employee_set)

print("\nEmployee Details Using Dictionary:")
print(employee_dict)

print("\n--------Employee Details--------")
print("\nName\tEmp_no\tCompany\tSalary\tEmail\tPhone")
print("\n",emp_name[i],"\t",emp_no[i],"\t",company[i],"\t",salary[i],"\t",email[i],"\t",phone[i])

empyt_set=set()
print(empyt_set)