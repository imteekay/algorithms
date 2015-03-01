def is_anagram?(first_word, second_word)
	first_word = first_word.split('').sort.join
	second_word = second_word.split('').sort.join

	position = 0
	matches = true

	while position < first_word.length && matches
		if first_word[position] == second_word[position]
			position += 1
		else
			matches = false
		end
	end

	matches
end

p is_anagram?('abcde', 'edcba')
p is_anagram?("nada", "adan")
p is_anagram?("oi", "tchau")