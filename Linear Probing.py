def linear_probing(hash_size, arr):
    hash_table = [-1] * hash_size

    for key in arr:
        index = key % hash_size

        while hash_table[index] != -1:
            index = (index + 1) % hash_size

        hash_table[index] = key

    return hash_table
