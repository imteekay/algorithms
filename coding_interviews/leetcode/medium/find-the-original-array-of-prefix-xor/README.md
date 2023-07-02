# Find The Original Array of Prefix Xor

[Problem link](https://leetcode.com/problems/find-the-original-array-of-prefix-xor)

- If you want `5 ^ ? = 2`, you can do a reverse xor using `5 ^ 2 = ?`, which in this case `? = 7`
- If you want to do consecutive XOR operations like `5 ^ 7 ^ 2 ^ 3 ^ 2`, you can replace that with the previous `pref` item
  - e.g. `5 ^ 7 ^ ? = 0.`, you want to find `?`
  - so you need to do `5 ^ 7 ^ 0 = ?` but at that point, if you don't store the previous result, you don't have `5 ^ 7`
  - but you can get this calculation from the previous `pref` item because it can replace `5 ^ 7`, in this case, it is `2`
- Runtime complexity: O(N), where N is prev.length
