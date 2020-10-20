function filteredArray(arr, elem) {
    let newArr = [...arr];
    // Only change code below this line
    for (let i = 0; i < newArr.length; i++) {
        let elemCheck = newArr[i].indexOf(elem);
        if (elemCheck != -1) {
            newArr.splice(i, 1);
        }
    }
    // Only change code above this line
    return newArr;
}

// It is returning [ ["flutes", 4] ]
console.log(filteredArray([ ["trumpets", 2], ["flutes", 4], ["saxophones", 2] ], 2));

// It is returning [ ["amy", "beth", "sam"] ]
console.log(filteredArray([ ["amy", "beth", "sam"], ["dave", "sean", "peter"] ], "peter"));

// It should return [ ]
console.log(filteredArray([[3, 2, 3], [1, 6, 3], [3, 13, 26], [19, 3, 9]], 3));