# Attributes are the things that the object HAS .
# Methods are the things object DOES .

# class is  the blueprint of an object or class is a blueprint for creating a object .

class Papa():
    def __init__(self,age,name):  # this init is a special type of functions or we can say it as constructor 
        self.age=age              # it is automatically called when a object is created using a class i.e a blueprint 
        self.name=name
        
        

shivay=Papa(19,"shivay")
naman=Papa(21,"naman")
print(shivay.name)













