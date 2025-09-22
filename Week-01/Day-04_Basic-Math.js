function isPrime() {
  // PRIME NUMBER CHECK
let n =56;

let isPrime = true;

if(n <2){
  isPrime = false;
}

for(let x=2; x*x <=n;x++){
  if(n % x === 0){
    isPrime = false;
    break;
  }
}

if(isPrime){
  console.log(n, " is Prime")
}else{
  console.log(n, " not prime")
}
// here 
// Time Complexity = O(√n)
// Auxiliary Space = O(1)
}
//******************************************************************************************************

// SIEVE OF ERATOSTHENES
function sieveOfEratosthenes(n) {
  let isPrime = new Array(n + 1).fill(true);
  isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

  for (let p = 2; p * p <= n; p++) {
    if (isPrime[p]) {
      for (let multiple = p * p; multiple <= n; multiple += p) {
        isPrime[multiple] = false;
      }
    }
  }

  // collect all primes
  let primes = [];
  for (let i = 2; i <= n; i++) {
    if (isPrime[i]) primes.push(i);
  }

  return primes;
}

// Example:
let n = 50;
console.log("Prime numbers up to", n, "are:", sieveOfEratosthenes(n));
