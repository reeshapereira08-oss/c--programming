#tuple list  inside the tuple
#tuple: name, pan.no, account.no=1000,dob,
#list: emailid,contact.no,address(placename) ,current balance
detailes2=[]
number=int(input("enter number of people:"))
for i in range(number):
    name=(input("enter name:"))
    pan_no=(int(input("enter pan no.:")))
    account_no=(int(input("enter account no.:")))
    dob=(input("enter DOB:"))
    email=(input("enter email_id:"))
    contact_no=(int(input("enter contact no.:")))
    address=(input("enter address:"))
    current_balance=(int(input("enter current balance:")))
    detailes=(name,pan_no,account_no,dob,[email,contact_no,address,current_balance])
    print(detailes)
    new_balance=float(input("new_balance:"))
    detailes[4][3]=new_balance
    new_balance=current_balance+new_balance
    print(detailes)
    print("\nAccount created successfully!")
    print(detailes)
    detailes2.append(detailes)
print("account detailes=",detailes2)

while True:
    print("\n1. deposit")
    print("2. withdraw")
    print("3. show accounts")
    print("4. exit")

    choice = input("Enter your choice: ")

    if choice == "4":
        print("Thank you!")
        break

    elif choice == "3":
        print("account details:", detailes2)

    elif choice == "1" or choice == "2":
        acc_no = int(input("Enter account number: "))
        found = False

        for details in detailes2:
            if details[2] == acc_no:
                found = True
                print("Account found.....")

                if choice == "1":
                    amount = float(input("Please enter deposit amount: "))

                    if amount > 0:
                        details[4][3] += amount
                        print("Current balance:", details[4][3])
                    else:
                        print("Enter a valid amount!")

                elif choice == "2":
                    amount = float(input("Enter withdraw amount: "))

                    if amount <= 0:
                        print("Enter a valid amount!")
                    elif amount > details[4][3]:
                        print("Insufficient balance!")
                    else:
                        details[4][3] -= amount
                        print("Current balance:", details[4][3])

                break

        if found == False:
            print("Invalid account number!")

    else:
        print("Invalid choice!")
