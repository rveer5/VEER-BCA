# to create we use same plot but we specify the type of plot
# types are 'l','n'
# ity is used to specify the type of line
Ity_value <- 1:6
plot(Ity_value, type = "n",
     axes = FALSE,
     ann = FALSE)
abline(h = Ity_value, lwd = 2, lty = Ity_value)
mtext(Ity_value, at = Ity_value, side = 2)
#mtext is used to add text at margins



#abline is used to print lines in lineplot
# a: The intercept of the line (for a straight line with slope b).
# b: The slope of the line (for a straight line with intercept a).
# h: The y-value(s) at which horizontal lines should be drawn.
# v: The x-value(s) at which vertical lines should be drawn.