#Question

* You are given an integer _N_ followed by _N_ email addresses. Your task is to print a list containing only valid email addresses in lexicographical order.


Valid email addresses must follow these rules:

 * It must have the username@websitename.extension format type.
 * The username can only contain letters, digits, dashes and underscores.
 * The website name can only have letters and digits.
 * The maximum length of the extension is _3_ .
 
 ##Input Format
 
 * The first line of input is the integer _N_ , the number of email addresses.
 * _N_ lines follow, each containing a string.
 
 ##Output Format
 
 Output a list containing the valid email addresses in lexicographical order. If the list is empty, just output an empty list, [].
 
 ##Sample Input
 
 3 <br>
lara@hackerrank.com <br>
brian-23@hackerrank.com <br>
britts_54@hackerrank.com <br>

##Sample Output

['brian-23@hackerrank.com', 'britts_54@hackerrank.com', 'lara@hackerrank.com']


#Diffitculty Level

Medium

#Error Type

Logical Error