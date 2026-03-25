def has_pair(arr, target):
    seen = set()

    for num in arr:
        if target - num in seen:
            return True
        seen.add(num)

    return False
