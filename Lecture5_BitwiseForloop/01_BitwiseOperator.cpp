/*
AND &   OR |    NOT ~   XOR ^
these operator operates on bit level.

1. &
    x   y   &   z
    0   0   &   0
    0   1   &   0
    1   0   &   0
    1   1   &   1

    2 & 3 : 010 + 011 = 10(2)
    5 & 7 : 101 + 111 = 101(5)

2. | 
    x   y   |   z
    0   0   |   0
    0   1   |   1
    1   0   |   1
    1   1   |   1
    
    2 | 4 : 010 + 100 = 110(6)
    3 | 6 : 011 + 110 = 111(7)

3. ~
    x   ~   z
    0   ~   1
    1   ~   0

integer is 4 byte => 32 bit
    ~2 : ~(0000 0000 0000 0010)
          (1111 1111 1111 1101) => a negative number.
when we want to print ,take 2s compliment leaving the first digit.
        1s : (_000 0000 0000 0010)
        2s : (_000 0000 0000 0011) (1s comp. + 1)
        0000 0000 0000 0011 => 3
        => ~(2) = -3

4. ^
    x   y   ^   z
    0   0   ^   0
    0   1   ^   1
    1   0   ^   1
    1   1   ^   0

    2 ^ 4 : 010 + 100 = 110(6)
    5 ^ 7 : 101 + 111 = 010(2)
*/