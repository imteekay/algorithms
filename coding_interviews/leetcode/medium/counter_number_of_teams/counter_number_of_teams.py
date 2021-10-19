def num_teams(rating):
    counter = 0

    for i in range(len(rating) - 2):
        for j in range(i + 1, len(rating) - 1):
            for k in range(j + 1, len(rating)):
                if (rating[i] < rating[j] and rating[j] < rating[k]) or (
                        rating[i] > rating[j] and rating[j] > rating[k]):
                    counter += 1

    return counter


def num_teams(rating):
    asc = desc = 0

    for index, value in enumerate(rating):
        llc = rgc = lgc = rlc = 0

        for left in rating[:index]:
            if left > value:
                lgc += 1
            if left < value:
                llc += 1

        for right in rating[index + 1:]:
            if right > value:
                rgc += 1
            if right < value:
                rlc += 1

        asc += llc * rgc
        desc += lgc * rlc

    return asc + desc
