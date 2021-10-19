
# https://leetcode.com/problems/increasing-decreasing-string/


def sort_string(s):
    result = []
    
    while len(s):
        last_appended, to_be_appended, chosen_index = float('-Inf'), float('Inf'), float('Inf')

        while chosen_index is not None:
            chosen_index = None

            for index, char in enumerate(s):
                unicode_char = ord(char)

                if unicode_char > last_appended and unicode_char < to_be_appended:
                    to_be_appended = unicode_char
                    chosen_index = index

            if chosen_index is not None:
                result.append(chr(to_be_appended))
                last_appended = to_be_appended
                to_be_appended = float('Inf')
                s = s[0:chosen_index] + s[chosen_index+1:]

        last_appended, to_be_appended, chosen_index = float('Inf'), float('-Inf'), float('Inf')

        while chosen_index is not None:
            chosen_index = None

            for index, char in enumerate(s):
                unicode_char = ord(char)

                if unicode_char < last_appended and unicode_char > to_be_appended:
                    to_be_appended = unicode_char
                    chosen_index = index

            if chosen_index is not None:
                result.append(chr(to_be_appended))
                last_appended = to_be_appended
                to_be_appended = float('-Inf')
                s = s[0:chosen_index] + s[chosen_index+1:]
            
    return ''.join(result)