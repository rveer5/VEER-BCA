import random

word_list=["shivay","veer","rahul"]

choose_word=random.choice(word_list)
print(f"the choosen word is : {choose_word}")   
display=[]
from arts import logo
print(logo)
for letter in choose_word:
    display+="_"
 
lives=6
end_of_game=False
while end_of_game==False:
    
    guess=input("guess a letter .").lower()

   
    
    for position in range(len(choose_word)):
      letter=choose_word[position]
    if letter==guess:
        display += "_"
        display[position]=letter
    else:
        print(f"you  guessed {guess} , that's not in the  word. you lose a life")  
        print(display)
    
    if guess not in choose_word:
      lives-=1
      
      from arts import stages
      print(stages[lives])
      if lives==0:
        end_of_game=True
        print("you lose .")  
         
        
   

    if "_" not in display:
       end_of_game=True
       print("you win")
       
       
     



 
        
    
    
    

        
        
 
         





















