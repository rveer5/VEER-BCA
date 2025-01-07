# Creating Line Graphs
# plot(v,type,col,xlab,ylab)

# v is a vector containing the numeric values.
# type takes the value "p" to draw only the points, "l" to 
# draw only the lines and "o" to draw both points and lines.

# xlab is the label for x axis.
# ylab is the label for y axis.
# main is the Title of the chart.
# col is used to give colors to both the points and lines.


# Create the data for the chart.
v <- c(7,12,28,3,41)
# Plot the bar chart. 
plot(v,type = "p")


# Create the data for the chart.
v <- c(7,12,28,3,41)
# Plot the bar chart.
plot(v,type = "o", col = "red", xlab = "Month", ylab = "Rain fall",
     main = "Rain fall chart")

# Multiples line plot

# Create the data for the chart.
v <- c(7,12,28,3,41)
t <- c(14,7,6,19,3)
# Plot the line
plot(v,type = "o",col = "red", xlab = "Month", ylab = "Rain fall", 
     main = "Rain fall chart")

lines(t, type = "o", col = "blue")


# Line-Plot
t<- 1:50
y <- 2.5 * sin(t * pi / 60) + rnorm(t)

plot(t, y, lwd = 2, type = "l")
abline(h = mean(y), col = "red", lty = 2)
abline(h = range(y), col = "blue", lty = 3)
abline(v = t[c(which.min(y), which.max(y))], col = "brown", lty = 3)
title("Line plot with auxiliary lines")



