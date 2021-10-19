def group_by(parsed_phone, number):
    numbers_of_characters = len(parsed_phone)
    result_list = []

    for i in range(0, numbers_of_characters, number):
        result_list.append(parsed_phone[i:i+number])

    return result_list

S = "00-44  48 5555 8361"
parsed_phone = S.strip().replace("-", "").replace(" ", "")
numbers_of_characters = len(parsed_phone)

if numbers_of_characters % 3 == 0 || numbers_of_characters % 3 == 2:
    return '-'.join(group_by(parsed_phone, 3))
else:
    grouped_by_three = group_by(parsed_phone[0:numbers_of_characters-4], 3)
    grouped_by_two = group_by(parsed_phone[numbers_of_characters-4:], 2)

    return '-'.join(grouped_by_three + grouped_by_two)
