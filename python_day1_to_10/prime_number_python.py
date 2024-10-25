number=int(input("enter the number :"))
count=0
for num in range(1,number+1):
    if number%num==0:
        count+=1
if count==2:
    print("the number is prime.")
else:
    print("not a prime number")
            
    