function largestOfFour(arr) {
let current = 0;
let result = [];
for (let i = 0; i < arr.length; i++){
  for (let j = 0; j < arr[i].length; j++){
    if (current < arr[i][j]){
      current = arr[i][j];
    }
  }
  if (arr[i].indexOf(current) >= 0){
    result = arr[i];
  }
}
return result;
}
// It should return [27, 5, 39, 1001]
console.log(largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]]));
// It should return [9, 35, 97, 1000000]
console.log(largestOfFour([[4, 9, 1, 3], [13, 35, 18, 26], [32, 35, 97, 39], [1000000, 1001, 857, 1]]));
