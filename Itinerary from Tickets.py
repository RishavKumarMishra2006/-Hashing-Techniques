def find_itinerary(tickets):
    to_map = {}
    reverse_map = set()

    for src, dest in tickets:
        to_map[src] = dest
        reverse_map.add(dest)

    # find starting point
    start = None
    for src in to_map:
        if src not in reverse_map:
            start = src
            break

    result = []
    while start in to_map:
        next_city = to_map[start]
        result.append((start, next_city))
        start = next_city

    return result
