# open read and write to files .
# section 24 or day 24 python udemey , angela yu ma'am


# when we open file it will  default be opened in read mode ,always mention the mode you are using other than read that is r .

# file=open("practice.py")
# content=file.read()
# print(content)
# file.close()



# another way
# with open("practice.py") as file:    # this automatically closes the opened file , we no need to use file.close()
#     content=file.read()
#     print(content)

with open("practice.py",mode="w") as file:    # this automatically closes the opened file , we no need to use file.close()
    file.write("shivay hindwani bhagwan santoshi mata ka sevak hai , jai santoshi mata .")
    
# append method is used when we don't need to delete the file content that is specified and to include some extra things 
# use mode "a" with write() function 

# note= when we are in write mode means "w" if file does not exist it will be automatically  created for us .

    
    
    
    
    
    




