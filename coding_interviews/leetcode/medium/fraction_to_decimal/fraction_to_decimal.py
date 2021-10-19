def fraction_to_decimal(numerator, denominator):
    if numerator == 0:
        return '0'

    if numerator % denominator == 0:
        return str(numerator // denominator)

    result = ''

    if ('-' in str(numerator)) ^ ('-' in str(denominator)):
        result += '-'

    numerator = abs(numerator)
    denominator = abs(denominator)

    number = str(numerator // denominator)

    result += number
    result += '.'

    mapper = {}
    remainder = numerator % denominator

    while True:
        if remainder == 0:
            break

        if remainder in mapper:
            result = result[:mapper[remainder]] + \
                '(' + result[mapper[remainder]:] + ')'
            break

        mapper[remainder] = len(result)
        remainder *= 10
        result += str(remainder // denominator)
        remainder %= denominator

    return result


data_test = [
    (1, 2, "0.5"),
    (2, 1, "2"),
    (2, 3, "0.(6)"),
    (4, 333, "0.(012)"),
    (1, 4, "0.25"),
    (1, 6, "0.1(6)"),
    (-1, 6, "-0.1(6)"),
    (1, -6, "-0.1(6)"),
    (-50, 8, "-6.25"),
    (1, 214748364, "0.00(000000465661289042462740251655654056577585848337359161441621040707904997124914069194026549138227660723878669455195477065427143370461252966751355553982241280310754777158628319049732085502639731402098131932683780538602845887105337854867197032523144157689601770377165713821223802198558308923834223016478952081795603341592860749337303449725)")
]

for numerator, denominator, expected in data_test:
    result = fraction_to_decimal(numerator, denominator)
    print(result, result == expected)
