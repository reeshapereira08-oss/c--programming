#tuple list  inside the tuple
#tuple: name, pan.no, account.no=1000,dob,
#list: emailid,contact.no,address(placename) ,current balance
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
new_balance=input("new_balance:")
current_balance=new_balance
print(detailes)