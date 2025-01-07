# Creating Box plot

boxplot(x, data, notch, varwidth, names, main)

# x is a vector or a formula.
# data is the data frame.
# notch is a logical value. Set as TRUE to draw a notch.
# varwidth is a logical value. Set as true to draw width of the box proportionate
# to the sample size.
# names are the group labels which will be printed under each boxplot.
# main is used to give a title to the graph.

mtcars
input <- mtcars[,c('mpg','cyl')]
print(head(input))

# Plot the chart.
boxplot(mpg ~ cyl, data = mtcars, xlab = "Number of Cylinders",
        ylab = "Miles Per Gallon", main = "Mileage Data")
# cyl = categorical variable which has 3 types of cylinders(4,6,8)
