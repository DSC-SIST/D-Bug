# This is a program to convert a line of normal text to CamelCase

'''
the below code is outputting this string

hi dsc team here
HIDSCTEAMHERE

'''

string = input()
string=string.split(" ")
for i in string:
    i=i.capitalize()
    print(i,end='')

'''
---make changes in the code that it's
Output should resembles this

hi dsc team here
HiDscTeamHere
'''