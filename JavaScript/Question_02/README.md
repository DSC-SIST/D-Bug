## Problem Description

Given an array `arr`, a nested array, and `elem` as arguments, which represents an element that may or may not be present on one or more of the arrays nested within `arr`, 
you must return a filtered version of the passed array such that any array nested within `arr` containing `elem` has been removed.

## Test-Cases 

```
// It is returning [ ["flutes", 4] ]
console.log(filteredArray([ ["trumpets", 2], ["flutes", 4], ["saxophones", 2] ], 2));

// It is returning [ ["amy", "beth", "sam"] ]
console.log(filteredArray([ ["amy", "beth", "sam"], ["dave", "sean", "peter"] ], "peter"));

// It should return [ ]
console.log(filteredArray([[3, 2, 3], [1, 6, 3], [3, 13, 26], [19, 3, 9]], 3));
```

The first Two Test-Cases are passing while the Last Test-Case is failing. Find the Bug in the Code Logic and resolve them. 

## Difficulty Level 

<b>Medium</b>

## Bug Type 

Logical Error.
