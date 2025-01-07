
x <- list(a = c(1, 2, 3, 4),
b <- c("veer", "shivay", "rahul", "himanshu"))
print(x)
x$a
#to access value from list and to access multiple item we can use
# x(listname)[c(name of particular list name like "a","b")]
#by index x[c(1,2)]
names(x) <- c("NUMBERS", "NAMES") #can give names to list by names(listname),
x
#setting values
x$a <- c(1, 2, 3, 4, 5)
x
y<-c(1,2,3)
is.list(x)
as.list(y) #is used to convert vector to list\
unlist(x) #is used to convert list to vector also gives name to their values