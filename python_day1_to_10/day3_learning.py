print('''
      *******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/[TomekK]
*******************************************************************************
''')

# to print a photo like this syntax = print('''               staring with  3 single quotation marks
# PHOTO                                                 the photo which you want to print 
# ''')                                                        ending with 3 single quotation marks

# can search photo from   [ascii.co.uk/art]
#  to search photo use =ctrl+f
print("welcoome to the treasure island ")
print("game begins now hunt the treasure to win the game ")
choice1=input('you are at the crossroad,where do you want to go ? type"left" or"right".').lower()
if choice1=="left":
    choice2=input('you have come to a lake. there is an island in the middle of the lake .type "wait" to wait for a boat .type "swim" to swim across \n').lower()
    if choice2=="wait":
     choice3=input('you arrive at the island unharmed .there is a house with 3 doors . one red, one yellow and one blue. which color do you choose?.').lower()
     if choice3=="red":
        print("you entered a room of beasts. GAME OVER .")
     elif choice3=="yellow":
        print("you  found the treasure . YOU WIN .")
     elif choice3=="blue":
        print("it's a room full of fire . GAME OVER .")
     else:
        print("you choose a door that does not exist .GAME OVER .")
    else:
        print("you got attacked by a monkey . GAME OVER.")
else:
    print("you fell into a hole.GAME OVER.")
                

                         
