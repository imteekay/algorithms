def can_construct(ransom_note, magazine):
    if ransom_note == '':
        return True

    if magazine == '':
        return False

    letters_counter = {}

    for letter in magazine:
        if letter in letters_counter:
            letters_counter[letter] += 1
        else:
            letters_counter[letter] = 1

    for char in ransom_note:
        if char not in letters_counter or letters_counter[char] == 0:
            return False

        letters_counter[char] -= 1

    return True
