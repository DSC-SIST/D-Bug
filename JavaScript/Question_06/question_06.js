function titleCase(str) {
    str = str.toLowerCase();
    var arr = str.split(" ");
    for (var i = 0; i < arr.length; i++) {
        var temp = arr[i];
        temp.toUpperCase(temp.charAt(0));
        arr[i].replace(arr[i], temp);
    }
    var newStr = arr.join(" ");
    return newStr;
}

// It should return "I'm A Little Tea Pot"
console.log(titleCase("I'm a little tea pot"));
// It should return "Short And Stout"
console.log(titleCase("sHoRt AnD sToUt"));
// It should return "Here Is My Handle Here Is My Spout."
console.log(titleCase("HERE IS MY HANDLE HERE IS MY SPOUT"));
