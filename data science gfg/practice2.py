# start=100
# stop=500
# sum=0
# for i in range(start,stop+1):
#     num=str(i)
#     if i%num[0]==0 and i%num[1]==0 and i%num[2]==0:
#         sum=sum+i
#         print(i)
        
# print(sum)

        
    
        
# start=100
# stop=200
# sum=0
# n=0
# for i in range(start,stop+1):
#     while i>0:
#         cn=i
#         r=i%10
#         i=i//10
#         while r!=0:
#             if cn%r==0:
#                 i=i//10
#                 r2=i%10
#                 while r2!=0:
#                     if cn%r2==0:
#                         i=i//10
#                         r3=i%10
#                         while r3!=0:
#                             if cn%r3==0:
#                                 sum=sum+cn
# print(sum)

start=100
stop=200
sum=0
n=0
for i in range(start,stop+1):
    n=str(i)
    if int(n[0])!=0 and int(n[1])!=0 and int(n[2])!=0:
        if i%int(n[0])==0 and i%int(n[1])==0 and i%int(n[2])==0:
            sum=sum+int(i)
print(sum)
# could be far better 
# my solution just work for the three digit number .


# another method using  below ,, more effective .
start=100
stop=200
sum=0
n=0

for i in range(start,stop+1):
    check=1
    n=str(i)
    for j in n:
        if int(j)==0 or i%int(j)!=0:
            check=0
            break
    if check ==1:
        sum=sum+i
print(sum)


             

        
#     if int(n[0])!=0 and int(n[1])!=0 and int(n[2])!=0:
#         if i%int(n[0])==0 and i%int(n[1])==0 and i%int(n[2])==0:
#             sum=sum+int(i)
# print(sum)




            
        
            
            
    
        