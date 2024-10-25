# total=0
# for number in range(1,101):
#     total+=number
# print(total)    

# below code calculates the sum of all even number till the range we mentioned.

target = int(input()) # Enter a number between 0 and 1000

sum=0
for number in range(2,target+1,2):
  sum+=number
print(sum)  

  
  