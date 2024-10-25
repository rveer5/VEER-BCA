list=[1,1,2,3,5,5,7,7,7,11,16]
target=5
first=0
last=0
for i in range(len(list)):
    if list[i]==target:
        first=i
        break
for j in range(first,len(list)):
    if list[j]==target:
        last=j

print("starting element  index is : ",first)
print("last  element  index is : ",last)


        




    
    
    


        
