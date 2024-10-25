# Input a Python list of student heights
student_heights = input().split()
for n in range(0, len(student_heights)):
  student_heights[n] = int(student_heights[n])
# 🚨 Don't change the code above 👆
  
# Write your code below this row 👇
total_heights=0
for heights in student_heights:
  total_heights+=heights

total_student=0
for student in student_heights:
  total_student+=1

average_height=round(total_heights/total_student)

print(f"total height = {total_heights}")
print(f"number of students = {total_student}")
print(f"average height = {average_height}")