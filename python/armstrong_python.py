number=int(input("enter a number :"))
arm=0
c=number
while number>0:
    r=number%10
    arm=(r*r*r)+arm
    number=number//10
    
if c==arm:
    print("number is armstromg.")
else:
    print("number is not armstrong.")
          