def get_decimal_value(head):
    numbers = [head.val]

    while head.next:
        head = head.next
        numbers.append(head.val)

    decimal_number = 0
    base = 1

    for index in range(len(numbers)):
        decimal_number += base * numbers[len(numbers) - index - 1]
        base *= 2

    return decimal_number
