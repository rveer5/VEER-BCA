height=float(input("enter the height:"))          # height taken in cm
weight=float(input("enter the weight:"))          
height_in_meter=height/100                                # converting height from cm to meter
bmi=weight/height_in_meter**2     
print(f" your bmi is :{bmi}")