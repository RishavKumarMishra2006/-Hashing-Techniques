def find_duplicates(arr):
    freq = {}
    result = []

    for num in arr:
        freq[num] = freq.get(num, 0) + 1

    for key in sorted(freq):
        if freq[key] > 1:
            result.append(key)

    return result if result else [-1]
