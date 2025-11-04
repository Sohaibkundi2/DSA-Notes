### Binary exponentiation (also called fast power) reduces the time to O(log₂ n).

- If n < 0, invert x → x = 1/x and make n positive.

- Initialize ans = 1.0.

- While n > 0:

    - If n is odd, multiply ans by x.

    - Square x (x *= x).

    - Divide n by 2 (n /= 2).

- Return ans.