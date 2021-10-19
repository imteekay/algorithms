# https://leetcode.com/problems/unique-morse-code-words/description/

# "gin" -> "--...-."
# "zen" -> "--...-."
# "gig" -> "--...--."
# "msg" -> "--...--."

def unique_morse_representations(words):
    morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
    alphabet = 'abcdefghijklmnopqrstuvwxyz'

    morse_code_mapper = {}

    for index, letter in enumerate(alphabet):
        morse_code_mapper[letter] = morse[index]

    unique_codes = set()

    for word in words:
        code = ''

        for letter in word:
            code += morse_code_mapper[letter]

        unique_codes.add(code)

    return len(unique_codes)

print(unique_morse_representations(["gin", "zen", "gig", "msg"]) == 2)
