function printNumbers(n){

    if(n === 1){
        console.log(1 )
        return
    }
    console.log(n )
    printNumbers(n-1)
}

// printNumbers(5)


function factorial(n) {
  if (n === 0 || n === 1) return 1;  // base case
  return n * factorial(n - 1);       // recursive case
}

// console.log(factorial(5)); // Output: 120s
// console.log(factorial(0)); // Output: 1
// console.log(factorial(1)); // Output: 1
// console.log(factorial(6)); // Output: 720


