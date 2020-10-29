function multiplesOf3and5(number) {
    var sum = 0;
    for(var i = 1; i < number; i++){
        if((i % 3 == 0 )||(i % 5 == 0)){
        sum = sum + i;
        }
    }
  return sum;
}

console.log(multiplesOf3and5(10)); // It should return 543
console.log(multiplesOf3and5(1000)); // It should return 233168
console.log(multiplesOf3and5(8456)); // It should return 16687353

