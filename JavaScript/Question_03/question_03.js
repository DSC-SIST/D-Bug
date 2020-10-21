// Only change code below this line
function countdown(myArray, n) {
    if (n == 1) {
        return [1];
    } else if (n > 1) {
        myArray = countdown(myArray, n - 1);
        myArray.unshift(n);
        return myArray;
    }
}

// It should return [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
console.log(countdown(10));

// It should return [5, 4, 3, 2, 1]
console.log(countdown(5));
