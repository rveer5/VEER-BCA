shivay={"one":"shivay","second":"naman","third":"veer"}   #  creting a simple dictionary.
print(shivay["one"])                                       #fetching data by using key.


shivay["fourth"]="dingu"                                    # adding data to dictionary          
print(shivay)

shivay["one"]="shivay_hindwani"                            # updating data using key 
print(shivay)


for key in shivay:
    print(key)
    print(shivay[key])                                   # using loop in dictionary