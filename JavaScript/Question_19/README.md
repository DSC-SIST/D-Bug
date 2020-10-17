kenKenHelper
Ken-Ken is a puzzle game similar to Sudoku. It consists board filled with digits 1-9 and can have no two identical digits in the same row or column. The board is then split into jigsaw-like shapes (cages), each with a target number and mathematical operator, for which the digits that fill it (order doesn't matter) must match.

For addition +, the digits must sum to target.
For multiplication *, the digits must multiply to target.
For subtraction -, the digits must have a difference of target. Only cages of size 2 are allowed for subtraction.
For division /, the digits must have a quotient of target. Only cages of size 2 are allowed for division.
For no operator "", the digits can fill it for any of the operators. If a cage has more than 2 cells, it can only have operators of + or *.
For example, with and operator of / and target of 4, with a 2x1 cage, possible digits to fill it are 2 and 8.

The cage shape is indicated by 1's. Provided a cage, target, and operator, your goal is to return an array of all possible digit combinations 