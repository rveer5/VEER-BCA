# Initialize the sum
S = 0

# Calculate the series
for i in range(1, 6):
    numerator = 1
    denominator = 1
    for j in range(1, i + 1):
        numerator *= j
    for j in range(1, i + 2):
        denominator *= j
    term = numerator / denominator
    S += term

# Print the result
print("Sum of the series:", S)
