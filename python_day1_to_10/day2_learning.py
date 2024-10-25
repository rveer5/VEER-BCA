print("welcome to the tip calculator .")
total_bill=int(input("waht was the total bill ?"))
percentage=int(input("what percentage tip would you like to give ? 10,12 or 15 ?"))
people=int(input("how many people to split the bill ?"))


tip=float((total_bill*percentage)/100)

individual=float((total_bill+tip)/people)
print(f"each person should pay: {individual}")




