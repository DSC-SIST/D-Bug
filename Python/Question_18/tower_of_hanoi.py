"""
    Question 18:
    Python program to implement the traditional Tower of Hanoi Problem.

    Difficulty Level : HARD
"""

def hanoi(n, source, helper, target):
    print("hanoi( ", n, source, helper, target, " called")
    if n > 0:
        # move tower of size n - 1 to helper:

        # move disk from source peg to target peg
        if source[0]:

            print("moving " + str(disk) + " from " + source[1] + " to " + target[1])

            #append the disk

        # move tower of size n-1 from helper to target
        hanoi(n - 1, helper, source, target)

source = ([4, 3, 2, 1], "source")
target = ([], "target")
helper = ([], "helper")
hanoi(len(source[0]), source, helper, target)
print (source, helper, target)
