# kadane's algorithm in python 
# to find the sum of the largest contiguous sub array 


list=[1, 3, 8, -2, 6, -8, 5]
print(len(list))
sum=0
maxi=list[0]
for i in range(0,len(list)):
    sum=sum+list[i]
    maxi=max(sum,maxi)
    if sum<0:
        sum=0
print(maxi)