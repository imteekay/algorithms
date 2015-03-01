def is_anagram?(first_word, second_word)
	if first_word.length == second_word.length
		letters_list = second_word.split('')

		position1 = 0
		still_ok = true

		while position1 < first_word.length && still_ok
			position2 = 0
			found = false
			while position2 < letters_list.length && !found
				if first_word[position1] == letters_list[position2]
					found = true
				else
					position2 += 1
				end
			end

			if found
				letters_list[position2] = nil
			else
				still_ok = false
			end

			position1 += 1
		end

		still_ok
	else
		false
	end
end

p is_anagram?('abcde', 'edcbaa')
p is_anagram?('abcde', 'edcba')
p is_anagram?("nada", "adan")
p is_anagram?("oi", "tchau")