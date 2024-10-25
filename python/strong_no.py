n=int(input("Enter a number :"))

sum=0
c=n

while n>0:
    fact=1
    r=n%10
    n=n//10
    for i in range(1,r+1):
        fact=fact*i
    sum=sum+fact
    
    
if c==sum:
    print("The number is a strong number .")
else:
    print("The  number is not a strong number .")