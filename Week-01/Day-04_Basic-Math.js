// PRIME NUMBER CHECK
let n = 7;
let isPrime = true;

if (n < 2) {
  isPrime = false;
} else {
  for (let i = 2; i * i <= n; i++) {
    if (n % i === 0) {
      isPrime = false;
      break;
    }
  }
}

if (isPrime) {
  console.log(n + " is Prime");
} else {
  console.log(n + " is Not Prime");
}

// here 
// Time Complexity = O(√n)
// Auxiliary Space = O(1)