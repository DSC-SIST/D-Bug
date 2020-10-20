function largestPalindromeProduct(digit) {
  if(digit === 2) {
    for(let i=99; i>9; i--) {
      for(let j=99; j>9; j--) {
        let number = i * j;
        let str = number.toString();
        if(str === str.split("").reverse().join(""))
          return number;
      }
    }
  }

    for(let i=999; i>99; i--) {
      for(let j=999; j>99; j--) {
        let number = i * j;
        let str = number.toString();
        if(str === str.split("").reverse().join(""))
          return number;
      }
    }
  return undefined;
}

console.log(largestPalindromeProduct(2)); // It should return 9009
console.log(largestPalindromeProduct(3)); // It should return 580085