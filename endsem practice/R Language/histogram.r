# Dataset: Marks of students
marks <- c(56, 78, 65, 45, 89, 90, 67, 72, 55, 80)

# Create a histogram
hist(marks, 
     breaks = 5,             # Number of bins
     main = "Histogram of Student Marks", 
     xlab = "Marks", 
     col = "skyblue", 
     border = "black")
