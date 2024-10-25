# name="shivay"[::-1]
# print(name)


#  Write a function that reverses a given string.


# def reverse(a):
#     str=""
#     for i in a:
#         str=i+str
#     return str
# result=reverse("shivay")
# print(result)

# Write a function that returns the sum of the digits of a given number.


# def total(num):
#     sum=0
#     while num>0:
#         r=num%10
#         num=num//10
#         sum+=r
#     return sum
# n=int(input("Enter a number :"))
# result=total(n)
# print(result)


# vowels in a string


# vowel=0
# name="codingninjas"
# for char in name:
#     if char in "aeiou":
#         vowel+=1
#         print(char,end="  ")
# print()
# print(vowel)

# . Given a list of words, write a list comprehension to filter out words with length greater than 3. a. 
# words = ['apple', 'banana', 'cherry', 'fig', 'grape'] 


# words = ['apple', 'banana', 'cherry', 'fig', 'grape'] 

# new_words=[i for i in words if len(i)>3]
# print(new_words)


#  Write a list comprehension that generates a list of multiples of 3 from 1 to 30. 


# list=[i for i in range(1,31) if i%3==0]
# print(list)

# Write a function that checks if a given string is a palindrome. 

# name="naman"
# str=""
# for char in name :
#         str=char+str
# if str==name:
#         print("palimdrome")
# else:
#         print("Not a palimdrome")


# Write a program that take your name and capitalizes the first name and last name of your 
# name. for example =
  #    sample input: virat kohli  
  #    sample output: Virat Kohli 
  
  

# name="shivay hindwani".title()                                     // using title function 
# print(name)
       
# name="shivay hindwani demo".split()
# str=""
# for i in name:                                                    // using capitalize and split function 
#     a=i.capitalize()
#     str+=a 
#     str+=" "
# print(str)

# This is the input = this is a string
# Convert into this output= this-is-a-string

# name="this is a string"
# name1=name.split()
# new_name="-".join(name1)
# print(new_name)


# name=["naman","shivay","veer","neeraj"]
# new_name=" ".join(name)
# print(new_name)


# fibonacci series


# num=10
# a=0
# b=1
# for i in range(1,num+1):
#   print(a)
#   c=a+b
#   a=b
#   b=c


# lambda

# a=lambda x,y:x+y
# b=a(3,4)
# print(b)        

# prime number

# num=9
# count=0
# for i in range(1,num+1):
#   if num%i==0:
#     count+=1

# if count==2:
#   print("prime number.")
# else:
#   print("Not a prime number.")    

result=["shivay hindwani","naman"]
new_result='-'.join(result)
print(new_result)


 
       
