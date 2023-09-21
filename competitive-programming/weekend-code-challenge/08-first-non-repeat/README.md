# Problem

This is a popular string problem that is pretty fun to solve.

Given a string of characters without spaces like the following:

```md
aaaccceeef
```

Write a function that returns the first non-repeating character. In this case, the correct answer would be `f`, since it is the first character in the string that doesn't have a repeat.

Here are a few other examples and the correct answer for your reference:

```md
abc0cb // correct answer is "a"
a01110abc // correct answer is "b"
aaaabbbccc // -1 since all are repeating
```

## Notes

- You will always have at least 1 character in the string (i.e. don't worry about an empty string)
- Characters will only consist of alphanumeric characters, aA-zZ, 0-9
- If there are no non-repeating characters in the string, return `-1`
