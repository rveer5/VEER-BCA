# nesting inportant topic

# nesting a list in dictionary

travel_log={
    "france":  ["paris","jaipur","ajmer"],
    "germany":["berlin","hamburg","sitapura"],
}

print(travel_log)

# nesting dictionary in a dictionary

travel_log={
    "france": {"cities_visited": ["jaipur","ajmer","sitapura"],"total_visits":12},
    "germany": {"cities_visited": ["berlin","hamburg","agra"],"total_visits":5},
    
}
print(travel_log)

# nesting dictionary in a list              

travel_log=[
    {
    "country":"france",
    "cities_visited":["paris","lille","dijon"],
    "total_visits":12
    },
    {
        "country":"germany",
        "cities_visited":["berlin","hamburg","stuttgart"],
        "total_visits":5
    },
    
]
print(travel_log)





