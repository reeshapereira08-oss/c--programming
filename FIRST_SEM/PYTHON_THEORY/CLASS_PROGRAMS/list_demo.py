list_mark=['Sebrent',99,89,95,78,90]#declares an list 'marks' to store of 'Sebrent'
my_mark=[]
#dynamic initialization
for number in range(5):
    mark=int(input("enter the listt element:"))
    my_mark.append(mark)
print("list elements are:")
for i in range(len(my_mark)):
    print(" my mark",my_mark[i])
print("marks:",my_mark)