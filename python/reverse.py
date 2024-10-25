n=int(input("enter a number :"))

while n>0:
    r=n%10
    print(r,end="")                       #end="" means there will be no next line . i.e = print(r) will be printed in same line again and again
    n=n//10
    
            