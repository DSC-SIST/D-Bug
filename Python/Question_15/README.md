# Question 15

## Problem Description

Consider the following:

* A string, _s_ , of length _n_ where _s_ = c<sub>0</sub>c<sub>1</sub>...c<sub>n-1</sub>.
* An integer, _k_ , where _k_ is a factor of _n_.
We can split _s_ into n/x subsegments where each subsegment, _t<sub>i</sub>_, consists of a contiguous block of _k_ characters in _s_ . Then, use each _t<sub>i</sub>_ to create string  _u<sub>i</sub>_ such that:

* The characters in  _u<sub>i</sub>_ are a subsequence of the characters in _t<sub>i</sub>_ .

* Any repeat occurrence of a character is removed from the string such that each character in _u<sub>i</sub>_ occurs exactly once. In other words, if the character at some index _j_ in _t<sub>i</sub>_ occurs at a previous index _<j_  in _t<sub>i</sub>_, then do not include the character in string _u<usb>i</sub>_.

* Given _s_ and _k_ , print _n/k_ lines where each line _i_ denotes string _u<sub>i</sub>_ .

#### Input Format

The first line contains a single string denoting _s_. <br>
The second line contains an integer,_k_ , denoting the length of each subsegment. <br>

#### Output Format

Print _n/k_ lines where each line _i_ contains string _u<sub>i</sub>_

## Difficulty Level <br>

Medium 

## Expected Error 

Logical Error 

## Sample Input

```
AABCAAADA
3
```

## Sample Output

```
AB
CA
AD
```

#### Explanation

String _s_ is split into _n/k_=_9/3_=_3_  equal parts of length _k_ = _3_ . We convert each _t<sub>i</sub>_ to _u<sub>i<sub>_ by removing any subsequent occurrences non-distinct characters in _t<sub>i</sub>_ : <br>

1. t<sub>0</sub> = "AAB" -> u<sub>0</sub> = "AB" <br>
2. t<sub>1</sub> = "CAA" -> u<sub>1</sub> = "CA" <br>
3. t<sub>2</sub> = "ADA" -> u<sub>2</sub> = "AD" <br>

We then print each _u<sub>i</sub>_ on a new line. <br>
