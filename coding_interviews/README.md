# Interview Traning

## Tech Interview Preparation

### [Before the interview](http://blog.gainlo.co/index.php/2017/02/18/chapter-1-get-interview-google-complete-guide-google-interview-preparation/)

- Referral Is The Core
  - Talk to some friends at this Tech companies
- Resume
  - Concise and easy to understand
  - Single page
  - Balance between details and simplicity
  - Clear to anyone without relevant background and at the same time give people some ideas about the complexity
  - Review and feedback
- Technical Questions
  - Draw an example:
    - Specific. It should use real numbers or strings (if applicable to the problem).
    - Sufficiently large. Most examples are too small, by about 50%.
    - Not a special case. Be careful. It's very easy to inadvertently draw a special case. If there's any way your example is a special case (even if you think it probably won't be a big deal), you should fix it.

### [Build a Solid Foundation](http://blog.gainlo.co/index.php/2017/02/24/chapter-2-build-solid-foundation-complete-guide-google-interview-preparation/)

Some questions to have in mind:

- How to do a search in a graph? What are the pros and cons of each approach? How to decide which one to use?
- For a list of objects, you can use linked list, array, stack, queue and other data structures. How would you decide which one to use? What is the biggest advantage/disadvantage?
- What’s the difference between dynamic programming and recursion? How do you compare a recursive solution and its iterative version?
- If I want to improve my solution from O(n^2) time complexity to O(nlogn), what algorithms come to your mind? How about O(n)?

### Algorithm Design Canvas

#### Constraints

- Constraints: Strings, Arrays, Numbers
  - range of values: min and max values for any key value
  - How many elements can be in the array?
  - How large can each element be? If it’s a string, how long? If it’s a number, what is the minimum and maximum value?
  - What is in each element? If it’s a number, is it an integer or a floating point? If it’s a string, is it single-byte or multibyte (unicode)?
  - If the problem involves finding a subsequence, does “subsequence” mean that the elements must be adjacent, or is there no such requirement?
  - Does the array contain unique numbers or can they be repeated (this is sometimes relevant)?
- Constraints: Grids/Mazes
  - For problems where some actor (e.g. a robot) is moving in a grid or maze, what moves are allowed? Can the robot move diagonally (hence 8 valid moves), or only horizontally/vertically (hence only 4 valid moves)?
  - Are all cells in the grid allowed, or can there be obstacles?
  - If the actor is trying to get from cell A to cell B, are cells A and B guaranteed to be different from each other?
  - If the actor is trying to get from cell A to cell B, is it guaranteed that there’s a path between the two cells?
- Constraints: Graphs
  - How many nodes can the graph have?
  - How many edges can the graph have?
  - If the edges have weights, what is the range for the weights?
  - Can there be loops in the graph? Can there be negative-sum loops in the graph?
  - Is the graph directed or undirected?
  - Does the graph have multiple edges and/or self-loops?
- Constraints: Return Values
  - What should my method return? For example, if I’m trying to find the longest subsequence of increasing numbers in an array, should I return the length, the start index, or both?
  - If there are multiple solutions to the problem, which one should be returned?
  - If it should return multiple values, do you have any preference on what to return? E.g. should it return an object, a tuple, an array, or pass the output parameters as input references? (This may not be applicable in languages allowing you to return multiple values, e.g. Python)
  - What should I do/return if the input is invalid / does not match the constraints? Options may be to do nothing (always assume the input is correct), raise an exception, or return some specific value.
  - In problems where you’re supposed to find something (e.g. a number in an array), what should be returned if the element is not present?

### Things to know when stuck

- Always consider hash tables (dictionaries) with their O(1)-ness. ("Tip: using a dictionary is the most common way to get from a brute force approach to something more clever. It should always be your first thought.")
- If at all array-related, try sorting first.
- If search-related, consider binary search.
- Start with a brute force solution, look for repeat work in that solution, and modify it to only do that work once.
  Space-time trade-off! That is, for better time complexity, try using auxiliary data structures. E.g., do something in a single pass over an array—O(N) time—by using a hash table—O(N) space—vs. doing something in multiple passes—O(N ^ 2)—without using any extra space—O(1). What information can I store to save time? (Another example: O(1) get_max method for a Stack class stores extra information (the max at and below each element) to save time (instead of iterating through the stack O(N)).)
- Try a greedy solution: Iterate through the problem space taking the optimal solution "so far" until the end. (Optimal if the problem has "optimal substructure," which means stitching together optimal solutions to subproblems yields an optimal solution.)
- Remember that I can use two pointers (e.g., to get the midpoint by having one pointer go twice as fast, or in a sum problem by having the pointers work inward from either end, or to test if a string is a palindrome).
- If the problem involves parsing or tree/graph traversal (or reversal in some way), consider using a stack.
- Does solving the problem for size (N – 1) make solving it for size N any easier? If so, try to solve recursively and/or with dynamic programming. (Using the max/min function can help a lot in recursive or dynamic programming problems.)
- A lot of problems can be treated as graph problems and/or use breadth-first or depth-first traversal.
- If you have a lot of strings, try putting them in a prefix tree / trie.
- Any time you repeatedly have to take the min or max of a dynamic collection, think heaps. (If you don’t need to insert random elements, prefer a sorted array.)
