"""
Question no. 17:

Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given _n_ scores. Store them in a list and find the score of the runner-up.

Difficulty Level : EASY

"""
if __name__ == '_main_':
    n = int(input()
    arr = map(int, input()split())
    print (sorted(set(arr))[-2])
    