# Inheritance in python .

class Shivay:
    def __init__(self):
        self.eyes=2
    def breath(self):
        print("inhale exhale")
    def legs(self):
        print("i have 2 legs.")
        
        
        
class Naman(Shivay):
    def __init__(self):
        super().__init__()
        # self.legs()
        
    def breath(self):
        super().breath()
        print("shivay bhiya")
        
        
    def swim(self):
        print("i know how to swim")
        

demo=Naman()
# demo.swim()
# print(demo.eyes)
# demo.breath()
demo.legs()



   