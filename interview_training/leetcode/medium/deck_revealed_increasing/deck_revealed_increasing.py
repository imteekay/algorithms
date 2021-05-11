# https://leetcode.com/problems/reveal-cards-in-increasing-order

import queue

def deck_revealed_increasing(deck):
    q = queue.Queue()
    sorted_deck = sorted(deck)
    
    for index in range(len(deck)): q.put(index)
        
    result = [0] * len(deck)
    index = 0

    while not q.empty():
        result[q.get()] = sorted_deck[index]
        index += 1
        if not q.empty(): q.put(q.get())
        
    return result
