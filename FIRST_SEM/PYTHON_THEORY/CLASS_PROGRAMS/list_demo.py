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

for i in range(len(my_mark)):
    sum=my_mark[0]+my_mark[1]+my_mark[2]+my_mark[3]+my_mark[4]
print("sum of the marks:",sum)