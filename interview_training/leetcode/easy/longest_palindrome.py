def count_pairs(letters):
    hash = {}
    result = {"pair": 0, "single": 0}

    for letter in letters:
        if hash.get(letter):
            hash[letter] += 1
        else:
            hash[letter] = 1

    for k, v in hash.items():
        if v > 1:
            result["pair"] += v - (v % 2)
            result["single"] += v % 2
        else:
            result["single"] += 1

    return result


def main(letters):
    counter = 0

    pairs = count_pairs(letters)
    counter += pairs["pair"]

    if pairs["single"] > 0:
        counter += 1

    return counter
