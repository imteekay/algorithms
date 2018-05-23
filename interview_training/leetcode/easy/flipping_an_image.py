# https://leetcode.com/problems/flipping-an-image/description/

# input: [[1,1,0], [1,0,1], [0,0,0]]
# output: [[1,0,0], [0,1,0], [1,1,1]]

def flip_and_invert_image(image):
    for i in range(len(image)):
        image[i] = image[i][::-1]

    for i in range(len(image)):
        for j in range(len(image[i])):
            image[i][j] = 1 - image[i][j]

    return image

print(flip_and_invert_image([[1,1,0], [1,0,1], [0,0,0]]))
