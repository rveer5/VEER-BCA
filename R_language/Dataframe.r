x <- list(
  a = c(1, 2, 3),
  b = c(TRUE, FALSE, TRUE)
)
data <- data.frame(
  Names = c("veer", "shivay"),
  age = c(1, 2)
)
mt <- matrix(c(1:9), nrow = 3, ncol = 4)
#byrow is used to give data in rows wise
data
as.data.frame(x) #used to create dataframe from list
as.data.frame(mt)
#to give name to col we colnames()
#to give name to row we use rownames()
x
matr <- matrix(sample(1:10, 12, replace = TRUE), nrow = 3, ncol = 4)
matr

#sample is used to create a matrix of 12 values of 1 to 10
