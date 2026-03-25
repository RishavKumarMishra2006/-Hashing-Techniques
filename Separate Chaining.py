def separate_chaining(hash_size, arr):
    hash_table = [[] for _ in range(hash_size)]

    for key in arr:
        index = key % hash_size
        hash_table[index].append(key)

    return hash_table
