names = ["shivay","naman","papa","mummy"]
# The code above converts the input into an array seperating
#each name in the input by a comma and space.
# 🚨 Don't change the code above 👆
import random
# num_items=len(names)
# random_choice=random.randint(0,num_items-1)
# person_who_will_pay=names[random_choice]
# print(person_who_will_pay + " is going to buy the meal today!")
people=len(names)
random_choice=random.randint(0,people-1)
person_who_will_pay=names[random_choice]
print(person_who_will_pay)
