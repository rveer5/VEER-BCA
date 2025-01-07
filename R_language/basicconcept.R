name<-"shivay"
"naman"->new_name
num=10
num2=5
num-num2
log1=TRUE
log2=FALSE

# c means combine , it combine the data 

vec=c(1,2,3,4)
vec2=c("a","b","c")
name2="shivay"
new_bag=c(1,TRUE,FALSE,7)
new_bag2=c(1,"a",3,"t",4)
# character than numeric than logical 
#precedence order

# indexing is allowed in vector.

# retrieving particular element is possible .
# using combined operator.
# new_bag2[c(1,5)]

# list = data structure 
# linear and hetrogeneous  data structure.

l1=list(1,"b",TRUE)

# vector inside list is possible.
mix_item=list(c(1,2,3),c("a","b","c"),c(TRUE,FALSE))

# accessing particular element is done  is list of vector .
# mix_item[[2]][1]  
# accessing first index in second vector inside the list .

# matrix data structure.
# 2 dimensional homogeneous data structure .

m=matrix(c(1,2,3,11,12,13))  # 6 rows 1 column matrix .
# matrix of 3 rows and 2 column.
m=matrix(c(1,2,3,11,12,13),nrow = 3,ncol = 2)

# matrix of 3 rows and 3 column.


# by default values will  be arranged column wise .
m2=matrix(c(1,2,3,11,12,13,33,44,55),nrow = 3,ncol = 3)
m2

# to assemble row wise use by row attribute .
m3=matrix(c(1,2,3,11,12,13,33,44,55),nrow = 3,ncol = 3,byrow = TRUE)

# Array data structure .
# multidimensional homogeneous data structure .

new_vac=c(1,2,3,4,5,6)
new_vac2=c(111,22,33,44,55,66)


# combining data in array using vector ,
# dim is used to set the number of row , number of column , 
# how many matrix do you want .
# in these case 2 matrix with 3 rows each and 2 column .

ar=array(c(new_vac,new_vac2),dim = c(3,2,2) )

# accessing particular element in array is possible.
# ar[1,1,2]

# factor data structure .

# data-frame data structure .
# two dimensional data structure hetrogeneous .
# data in form of rows and column.

fruit= data.frame(fruit_name=c("mango","apple","pineapple"),fruit_cost=c(100,30,40))

# can use view function to make structure of the data_frame.
# can access any specified column  using syntax
# fruit$fruit_cost


m4=seq(1,10,2)
# numeric vector of length .
vec=21:25
length(vec)

vec=c("shivay"=1,"naman"=2,"veer"=3)
is.logical(vec)
st=c("1","2")


num1=8
num2=5
c1 <- c(5,6,9)
c2 <- c(2,8,7)























           







