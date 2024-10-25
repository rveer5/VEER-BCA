# title function convert  the first letter of a string to upper case and all other letters to lower case 

# name="sHIVAY".title()
# print(name)

from arts import calculator_logo
print(calculator_logo)


def add(n1,n2):
    return n1+n2

def subtract(n1,n2):
    return n1-n2

def divide(n1,n2):
    return n1/n2

def multiply(n1,n2):
    return n1*n2






operations={
    "+":add,
    "-":subtract,
    "/":divide,
    "*":multiply
}  


def calculator_new():
    num1=int(input("Enter the first number : "))
    should_cont=True
    while should_cont:
        for i in operations:
            print(i)
        calculator=input("Select the operation you want to perform from the above given line : ")
        num2=int(input("Enter the next number : "))
        
        


        calculator_function=operations[calculator]
        answer=calculator_function(num1,num2)
        print(f" {num1} {calculator} {num2} = {answer} ")
        
        if input(f"Type 'y'to continue calculating with answer = {answer} or type 'n' to Start a New Calculation or type anything random to exit the program :")=="y":
            num1=answer
        elif input=="n":
            should_cont=False
            calculator_new()
        else:
            print("PROGRAM ENDED.")
            print("See you next time .")
            should_cont=False
calculator_new()
            
            
    
    


    
    

    
