##Question

Given a partially filled 9×9 2D array ‘grid[9][9]’, the goal is to assign digits (from 1 to 9) to the empty cells so that every row, column, and subgrid of size 3×3 contains exactly one instance of the digits from 1 to 9.

##Sample Input 

    
    grid= { { 3, 1, 6, 5, 7, 8, 4, 9, 2 }
          { 5, 2, 9, 1, 3, 4, 7, 6, 8 }
          { 4, 8, 7, 6, 2, 9, 5, 3, 1 }
          { 2, 6, 3, 0, 1, 5, 9, 8, 7 }
          { 9, 7, 4, 8, 6, 0, 1, 2, 5 }
          { 8, 5, 1, 7, 9, 2, 6, 4, 3 }
          { 1, 3, 8, 0, 4, 7, 2, 0, 6 }
          { 6, 9, 2, 3, 5, 1, 8, 7, 4 }
          { 7, 4, 5, 0, 8, 6, 3, 1, 0 } }
         
 ##Sample Output
 
           3 1 6 5 7 8 4 9 2 
           5 2 9 1 3 4 7 6 8 
           4 8 7 6 2 9 5 3 1 
           2 6 3 4 1 5 9 8 7 
           9 7 4 8 6 3 1 2 5 
           8 5 1 7 9 2 6 4 3 
           1 3 8 9 4 7 2 5 6 
           6 9 2 3 5 1 8 7 4 
           7 4 5 2 8 6 3 1 9 
           
  ## Explaination
  Each row, column and 3*3 box of 
the output matrix contains unique numbers.

###Hint
Solution is based on Backtracking method

#Difficulty Level

__Hard__

##Error Type

Logical and Syntactical Error
           
         