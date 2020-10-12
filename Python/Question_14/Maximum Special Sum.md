#Question:

Given an array of size N and two integers K and S, the special sum of a subarray is defined as follows:
(Sum of all elements of the subarray) * (K - p * S)
Where p = number of distinct prime factors of “product of all elements of the subarray”.
Find the maximum special sum by considering all non-empty subarrays of the given array.

##Input
* First line contains 3 integers N, K and S.
* Second line contains N integers, the elements of the array.

##Output

Output a single integer. The maximum special sum considering all non-empty subarrays of the array.

##Sample Input
4 10 2
14 2 7 15

##Sample Output
138

##Sample Explaination

Consider the subarray {14, 2, 7}
Total number of distinct prime factors in it is 2 (2 and 7).
Therefore, value of special sum is (14 + 2 + 7) * (10 - 2 * 2) = 138.
This is the subarray with the maximum special sum.

#Difficulty Level

__Medium__

#Error Type

Logical and Syntactical