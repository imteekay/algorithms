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

Build the the foundation by learning the fundamental algorithms and data structures:

- Fundamental Algorithms
    - [ ] Sorting: merge, quick, bucket, heap, counting
    - [ ] Searching: Binary Search, Depth First Search, Breadth First Search
    - [ ] Dynamic Programming
    - [ ] String / Array: reverse
    - [ ] Linked list: insertion, deletion
- Fundamental Data Structures
    - [X] [Stack](https://github.com/leandrotk/algorithms/tree/master/computer_science/data_structures/stack)
    - [X] [Queue](https://github.com/leandrotk/algorithms/tree/master/computer_science/data_structures/queue)
    - [X] [Linked List](https://github.com/leandrotk/algorithms/tree/master/computer_science/data_structures/linked_list)
    - [X] [Hash Map](https://github.com/leandrotk/algorithms/tree/master/computer_science/data_structures/hash_table)
    - [X] [Graph](https://github.com/leandrotk/algorithms/tree/master/computer_science/data_structures/graph)
    - [X] [Tree](https://github.com/leandrotk/algorithms/tree/master/computer_science/data_structures/binary_search_tree)
- Complexity
    - [ ] Space complexity for all algorithms / data structures
    - [ ] Runtime complexity for all algorithms / data structures
    - [ ] Make comparisons between algorithms and data structures

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

## Resources

### Preparation

- [Google Interview Preparation](http://blog.gainlo.co/index.php/category/google-interview-preparation/)
- [The ultimate guide to preparing for the coding interview](https://medium.com/free-code-camp/the-ultimate-guide-to-preparing-for-the-coding-interview-183251ee36c9)
- [Taejun's preparation](https://qr.ae/TSJEJv)
- [Recruiter's view](https://qr.ae/TSJE3x)
- [Prep by elliotbot](https://old.reddit.com/r/cscareerquestions/comments/6278bi/my_journey_and_tips_29_gpa_at_a_noname_liberal/)
- [Google devtip: Software Engineering Principles](https://techdevguide.withgoogle.com/paths/principles/)
- [Google devtip: DS & Algorithms](https://techdevguide.withgoogle.com/paths/data-structures-and-algorithms/)
- [Google devtip: Interview Prep](https://techdevguide.withgoogle.com/paths/interview/)
- [Software Engineer interview preparation](https://www.mauriciopoppe.com/notes/misc/software-engineer-interview-preparation/)
- [Algorithm Template](https://docs.google.com/document/d/1TKNUaBdgzEoPaD8LNexz9JlquRKc1ZSBnNJuZmhFp4Y/edit)

### Interviewers' POV

- [Brian Bi considerations](https://qr.ae/TSJE9l)
- [knock a technical interview](https://qr.ae/TSJEkK)

### Big O Notation

- [Big O Notation w/ Gayle](https://www.youtube.com/watch?v=v4cd1O4zkGw&ab_channel=HackerRank)

### Algorithms & Data Structures

- [Know your complexities: Big-O cheat sheet](https://www.bigocheatsheet.com/)
- [Data Structures and Algorithms cheat sheet](https://github.com/TSiege/Tech-Interview-Cheat-Sheet)
- [Top 10 algorithms in interview questions](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/)
- [Python Algorithms for Interviews](https://www.youtube.com/watch?v=p65AHm9MX80)
- [Data Structures Easy to Advanced Course - Full Tutorial from a Google Engineer](https://www.youtube.com/watch?v=RBSGKlAvoiM)
- [InterviewBit algorithms course](https://www.interviewbit.com/courses/programming/)
- [Programming Interview Questions](http://www.ardendertat.com/2012/01/09/programming-interview-questions/)
- [Useful links about algorithms](https://leetcode.com/discuss/general-discussion/665604/important-and-useful-links-from-all-over-the-Leetcode)

### System Design

- [Preparing to System Design](https://qr.ae/TSJEwu)
- [InterviewBit System Design course](https://www.interviewbit.com/courses/system-design/)
- [System Design Primer](https://github.com/donnemartin/system-design-primer)
- [The System Design Process](https://www.hiredintech.com/classrooms/system-design/lesson/55)
- [High Scalability](http://highscalability.com/)
- [System Design Template](https://leetcode.com/discuss/career/229177/My-System-Design-Template)

### In the interview

- [Green flags in a interview](https://qr.ae/TSJEQA)
- [Mercari's culture](https://engineering.mercari.com/en/culture/)

### Finding a job in Japan

- [How I Found A Software Development Job in Japan Without Experience and Without Speaking Japanese](https://medium.com/curious/how-i-found-a-software-development-job-in-japan-without-experience-and-without-speaking-japanese-5ff8698e33d9)

### Platforms to learn

- [Binary Search](https://binarysearch.com/)
