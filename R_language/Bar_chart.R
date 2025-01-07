# Creating Barchart
barplot(H,xlab,ylab,main, names.arg,col)
# H is a vector or matrix containing numeric values used in bar chart.
# xlab is the label for x axis.
# ylab is the label for y axis.
# main is the title of the bar chart.
# names.arg is a vector of names appearing under each bar.
# col is used to give colors to the bars in the graph.


# Create the data for the chart
H <- c(7,12,28,3,41)
barplot(H)

# Barchart labels, title and color

# Create the data for the chart
H <- c(7,12,28,3,41)
M <- c("Mar","Apr","May","Jun","Jul")
# Plot the bar chart 
barplot(H, names.arg=M, xlab="Month", ylab="Revenue", col="blue",
        main="Revenue chart",border="red")

# Group Bar chart and stacked bar chart

# Create the input vectors.
colors = c("green","orange","brown")
months <- c("Mar","Apr","May","Jun","Jul")
regions <- c("East","West","North")

# Create the matrix of the values.
Values <- matrix(c(2,9,3,11,9,4,8,7,3,12,5,2,8,10,11), nrow = 3, 
                 ncol = 5, byrow = TRUE)

# Create the bar chart
barplot(Values, main = "total revenue", names.arg = months, 
        xlab = "month", ylab = "revenue", col = colors)

# Add the legend to the chart
legend("topleft", regions, cex = 0.8, fill = colors)