#x <- rnorm(100) y <- 2 * x + rnorm(100) it takes random values

plot(x, y, xlab = "veer ka plot", ylab = "Harshu", pch = 2,
     xlim = c(-3, 3), ylim = c(-6, 6), title("Scatter Plot"))

#ylab and xlab are used to give name to the x and yaxis
#xlim anbd ylim are used to give length to x and y axis

#text(x, y, labels) this is used to give annotations to the plot

plot(0:25, 0:25, pch = 0:25,
     xlim = c(-1, 26), ylim = c(-1, 26),
     main = "Point styles (pch)")
text(0:25 + 1, 0:25 - 1, 0:25)

#ifelse() is used to check condition in plot

#points is used to plot 2 data sets on a single plot
x <- rnorm(75)
y <- 1.5 * x + rnorm(75)
z <- sqrt(1 + x ^ 2)
plot(x, y,
     pch = 1,
     col = "blue",
     xlim = range(x),
     ylim = range(y, z),
     xlab = "x",
     ylab = "y")
points(x, z, pch = 17, col = "red")
title("VEER Ka 2 DATASET")
