
// O(n) example
// constant time complexity O(1)

function getFirstElement(arr) {
  return arr[0];
}

// linear time complexity O(n)

function sumArray(arr) {
  let total = 0;
  for (let num of arr) {
    total += num;
  }
  return total;
}