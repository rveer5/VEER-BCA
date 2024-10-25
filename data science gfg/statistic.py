# mean median mode 
import numpy as np

# mean

# arr=np.array([1,2,3,4,5])
# mean=np.mean(arr)         # printing mean without using any formula  .
# print(mean)

# weighted  average 

# W = Sum of (Product of weights with their respective quantities)/ Sum of all the weights
#to know more check gfg 

# arr=np.array([1,2,3,4,7,9])
# weight=np.array([1,2,3,4,5,6])
# result=np.average(arr,weights=weight)
# print(result)

# median

# arr=np.array([1,2,3,4,5,6,7,8,76])
# print(np.median(arr))                             # calculating median without formula .
# array should be in ascending order .

# mode

arr=np.array([1,2,3,4,5,6,6,2,2,2])
from collections import Counter as cp
count=cp(arr)
# print(count)
print(count.most_common(1))    #  1 here means the first max one  
# if we only print count it will count all the element of the array .
# play with code to understand  more about it .









