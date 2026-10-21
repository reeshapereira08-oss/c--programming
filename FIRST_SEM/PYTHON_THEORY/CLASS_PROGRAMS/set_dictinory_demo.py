#collect employees name,emp number,company name ,salary (store in set and dictinary)
emp_name=input("enter employee name:")
emp_no=int(input("enter employee number:"))
company=input("enter company name:")
salary=float(input("enter salary:"))

employee_set={emp_name,emp_no,company,salary}

employee_dict={
    "Name":emp_name,
    "Employee Number":emp_no,
    "Company Name":company,
    "Salary":salary
}
print("\nEmployee Details Using set:")
print(employee_set)

print("\nEmployee Details Using Dictionary:")
print(employee_dict)