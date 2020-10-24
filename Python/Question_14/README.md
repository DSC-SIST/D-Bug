# Question 14

## Problem Description

Given an array of size N and two integers K and S, the special sum of a subarray is defined as follows: <br>
(Sum of all elements of the subarray) * (K - p * S) <br>
Where p = number of distinct prime factors of “product of all elements of the subarray”.<br>
Find the maximum special sum by considering all non-empty subarrays of the given array.

### Input

First line contains 3 integers N, K and S. <br>
Second line contains N integers, the elements of the array. <br>

### Output

Output a single integer. The maximum special sum considering all non-empty subarrays of the array.

# Difficulty Level

Medium

## Expected Error 

Logical and Syntactical

## Sample Input

4 10 2 <br>
14 2 7 15 <br>

## Sample Output

138

## Sample Explaination

Consider the subarray {14, 2, 7} <br>
Total number of distinct prime factors in it is 2 (2 and 7). <br>
Therefore, value of special sum is (14 + 2 + 7) * (10 - 2 * 2) = 138. <br>
This is the subarray with the maximum special sum. <br>
