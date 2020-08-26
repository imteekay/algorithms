# https://leetcode.com/problems/subrectangle-queries


class SubrectangleQueries:
    def __init__(self, rectangle):
        self.rectangle = rectangle

    def updateSubrectangle(self, row1, col1, row2, col2, newValue):
        for row in range(row1, row2 + 1):
            for col in range(col1, col2 + 1):
                self.rectangle[row][col] = newValue

    def getValue(self, row, col):
        return self.rectangle[row][col]
