function findLongestWordLength(str) {
  const longestWord = str.split('').map((x) => x.length).sort((a,b) => b-a);
  return longestWord[0];
}

console.log(findLongestWordLength("The quick brown fox jumped over the lazy dog")); // It should return 6
console.log(findLongestWordLength("May the force be with you")); // It should return 5
console.log(findLongestWordLength("What if we try a super-long word such as otorhinolaryngology")); // It should return 19