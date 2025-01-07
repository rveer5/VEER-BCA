# Scatter plot
# //xlab and y lab is used to give the names of x and y axis
x <- rnorm(200)
y <- 2*x + rnorm(200)
plot(x,y)
plot(x, y, main = "Correlated Random numbers",
     xlab = "x", ylab = "2x + noise",xlim = c(-3, 3), ylim = c(-6, 6))

#when you want to plot a char which is using same x axis then poins() is used.
x <- rnorm(75)
y <- 1.5*x + rnorm(75)
z <- sqrt(1 + x ^ 2) + rnorm(75)
plot(x, y, pch = 1,
     xlim = range(x), ylim = range(y, z),
     xlab = "x", ylab = "value")
points(x, z, pch = 17)
title("Scatter plot with two datasets")

#we can also change the pointer in chart using pch
#and we can also give color to pointer using col.
x <- rnorm(75)
y <- 1.5*x + rnorm(75)
plot(x, y, pch = 2, col = "brown", 
     main = "Blue Color Scatter Plot")
#we can also use ifelse() to check condtition.
plot(x, y, pch = 16,
     col = ifelse(y >= mean(y), "red", "green"),
     main = "Scatter plot - conditional colors")