def count_distinct(arr, k):
    n = len(arr)
    result = []

    freq = {}

    # first window
    for i in range(k):
        freq[arr[i]] = freq.get(arr[i], 0) + 1

    result.append(len(freq))

    for i in range(k, n):
        # remove previous
        freq[arr[i - k]] -= 1
        if freq[arr[i - k]] == 0:
            del freq[arr[i - k]]

        # add new
        freq[arr[i]] = freq.get(arr[i], 0) + 1

        result.append(len(freq))

    return result
