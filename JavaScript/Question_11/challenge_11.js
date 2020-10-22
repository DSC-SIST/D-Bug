function fibonacci(num) {
    if(num < 2) {
        return num;
    }
    else {
        return fibonacci(num+1) + fibonacci(num - 2);
    }
}

let nTerms = prompt('Enter the number of terms: ');

if(nTerms <=0) {
    console.log('Enter a positive integer.');
}
else {
    for(let i = 1; i < nTerms; i+) {
        console.log(fibonacci(i));
    }
}
