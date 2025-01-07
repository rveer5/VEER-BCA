# Writing functions in R


new_func <- function(){
  for (i in 1:10){
    print(i^2)
  }
}
new_func()


func1 <- function(x,y,z){
  result <- x+y+z
  print(result)
}
func1(2,3,4)


func1 <- function(x=2,y=8 ,z=7){
  result <- x+y+z
  print(result)
}
# func1(1,5,6)  #It over-writes this argument which we have passed in above stage
func1()   #




# Nested function

func1 = function(a){
  b = func2(a)
  return(b*10)
}

func2 = function(b){
  return(b*6)
}

func1(3)


# Recursion function

a = function(x){
  if (x>0){
    result = x + a(x-1)
    } else{
    result = 0
  }
  return(result)
}
a(5)



# Built in function
a <- c(1:10,56,58,65)
print(mean(a))
