function palindrome(str) {
    str = str.split(/\W*\d*[_]*/).join('').toLowerCase()
    console.log(str)
    console.log(str.length, str.length / 2 >> 0)
    for (var i = 0; i < str.length / 2 >> 0; i++) {
        console.log(str[i], '== ', str[str.length - i - 1])

        if (str[i] != str[str.length - i - 1]) {
            return false
        }
    }

    return true;
}

console.log(palindrome("My age is 0, 0 si ega ym.")); // It should return True 
console.log(palindrome("0_0 (: /-\ :) 0-0")); // It should return True 
console.log(palindrome("1 eye for of 1 eye.")); //It should return False
