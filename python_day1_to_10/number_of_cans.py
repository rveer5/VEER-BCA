def paint_calc(height,width,cover):
    number_of_cans=round((height*width)/cover)
    print(f"you will need {number_of_cans}")
    

    
    
test_h=int(input("enter height of the wall:"))
test_w=int(input("enter width of the wall:"))
coverage=5    



paint_calc(height=test_h,width=test_w,cover=coverage) 

   

