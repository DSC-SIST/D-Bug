def pattern5(level):
    '''This function prints the following pattern:
      *
     ***
    *****
    
    But the output of the program is 
    Enter the level: 5
*
     ***
          *****
               *******
                    *********
                 
find the bug and solve accordingly                 
    '''
    # first loop for number of lines
    for i in range(level):
        #second loop for spaces
        for j in range(level * i):
            print (" ",end='')
        # this loop is for printing stars
        for k in range(2 * i + 1):
            print("*", end='')
        print()

if __name__ == '__main__':
    userInput = int(input('Enter the level: '))
    pattern5(userInput)
