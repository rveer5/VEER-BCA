students <- c(40, 25, 44, 55)
courses <- c("Science", "Commerce", "Arts", "Others")
pie(students,
    labels = courses, main = "Number of student and courses",
    col = c("lightblue", "lightgreen", "pink", "yellow"))