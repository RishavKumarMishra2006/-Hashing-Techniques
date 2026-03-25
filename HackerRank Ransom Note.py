def ransom_note(magazine, note):
    freq = {}

    for word in magazine:
        freq[word] = freq.get(word, 0) + 1

    for word in note:
        if freq.get(word, 0) == 0:
            return "No"
        freq[word] -= 1

    return "Yes"
