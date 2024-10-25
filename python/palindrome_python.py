n=int(input("enter a number :"))

sum=0
c=n
while n>0:
    r=n%10
    sum=r+(sum*10)
    n=n//10
if c==sum:
    print("the number is palindeome .")
else:
    print("the number is not palindrome .")