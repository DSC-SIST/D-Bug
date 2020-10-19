class Solution:
    # Function to check parentheses
    def isValid(self, s: str) -> bool:
        # creating a ampty stack and all valid parentheses
        stack, pchar = [], {"(": ")", "{": "}", "[": "]"}
        #loop to check the parentheses in input string s
        # fix the bug somewhere below this code.
        for parenthese in s:
            if parenthese in pchar:
                stack.append(parenthese)
            elif len(stack) == 0:
                return False
            #if the stack is empty that means the input string is a valid parenthese
        return len(stack) == 0