"""
TOWER OF HANOI <br>

  The rules of the game are very simple, but the solution is not so obvious. The game "Towers of Hanoi" uses three rods. A number of disks is stacked in decreasing order from the bottom to the top of one rod, i.e. the largest disk at the bottom and the smallest one on top. The disks build a conical tower. <br>

  The aim of the game is to move the tower of disks from one rod to another rod.<br>

  The following rules have to be obeyed:
  *  Only one disk may be moved at a time.
  *  Only the most upper disk from one of the rods can be moved in a move
  *  It can be put on another rod, if this rod is empty or if the most upper disk of this rod is larger than the one which is moved.
 
* __The number of moves necessary to move a tower with n disks can be calculated as: 2<sup>n</sup> - 1__

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
