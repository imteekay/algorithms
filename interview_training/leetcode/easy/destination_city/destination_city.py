def dest_city(paths):
    all_origins = []
    all_destinations = []

    for [city1, city2] in paths:
        all_origins.append(city1)
        all_destinations.append(city2)

    return [d for d in all_destinations if d not in all_origins][0]


def dest_city(paths):
    all_origins = set()
    all_destinations = set()

    for [city1, city2] in paths:
        all_origins.add(city1)
        all_destinations.add(city2)

    return (all_destinations - all_origins).pop()
