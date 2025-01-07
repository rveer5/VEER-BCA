# Unit-5

ceiling(c(-1.3,-1.7, 1.3, 1.7))   # -1 -1 2 2 
floor(c(-1.3,-1.7, 1.3, 1.7))     # -2 -2 1 1 
trunc(c(-1.3,-1.7, 1.3, 1.7))     # -1 -1  1  1
round(c(-2.5,-1.5,-0.5,0.5,1.5,2.5,3.5))    
min(c(1, 2, 3))
max(c(1, 2, 3))
min(c(1, 2, 3), c(3, 2, 1), c(2, 3, 4))
max(c(1, 2, 3), c(3, 2, 1), c(2, 3, 4))
pmin(c(1, 2, 3), c(3, 2, 1), c(2, 3, 4))
pmax(c(1, 2, 3), c(3, 2, 1), c(2, 3, 4))

new_func <- function(x){
  pmin(5, pmax(-5, x))
}
new_func(seq(-8,8))


# Finding Rooots
# 𝑥2 + 𝑥 − 2 = 0
polyroot(c(-2, 1, 1))   #Quadratic equation
# 𝑥3 − 𝑥2 − 2𝑥 − 1 = 0  cubic equation
polyroot(c(-1,-2, -1, 1))

# Finding Derivatives
z = D(quote (x ^ 2), "x")
eval(z, list(x=5))

D(quote(sin(x) * cos(x * y)), "x")

# Finding Integration
integ <- integrate(function(x) sin(x), 0, pi / 2)
integ
integ$value


.
