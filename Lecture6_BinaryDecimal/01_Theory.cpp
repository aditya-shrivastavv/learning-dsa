/*
So. Our Problem is that how do we make number out of digits.??

1,2,3 are our digits. we want to make number 123 from it.
our algorithm would be-

------------------------------------------------------------------
FORMULA : number = (digit * 10^i) + number 
number = 0
number = (digit[fromLeft] * 10^0) + number; => (1 x 1) + 0 => 1
number = (digit * 10^1) + number; => (2 x 10) + 1 => 21
number = (digit * 10^2) + number; => (3 x 100) + 21 => 321
number = 321

through this algorithm we have made 1,2,3 => 321.(reverse)
now.

-----------------------------------------------------------------
FORMULA : number = (number * 10) + digit
number = 0
number = (0 * 10) + 1; => 0 + 1 => 1
number = (1 * 10) + 2; => 10 + 2 => 12
number = (12 * 10) + 3; => 120 + 3 => 123
*/