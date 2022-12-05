// only int and char can be written inside case...
// float and string cannot be written inside case.
#include <iostream>
// #include <climits> it has values like INTMAX etc.
using namespace std;

int main() {
    int n;
    cout <<"enter n: "; cin >> n;

// * any variable or expression can be passed in it.
// ! expression which eventually gives a constant upon calculation.
    switch (expression) 
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default: // * default case is not neccesary, it is okay if we not use it.
        break;
    }
    return 0;
}
// ? agar infinite loop ke andar switch() use kar rhe hai toh bahar kaise aaenge.
/*
            by exit function...

there are primarily two types of exit();

    1. exit(0) => which is the exit successfully which means program has run 
        successfully and then it is terminated. i.e. program has been executed without
        any error or interrupt.
        
    2. exit(1) => Exit Failure: Exit Failure is indicated by exit(1) which means 
        the abnormal termination of the program, i.e. some error or interrupt has 
        occurred. We can use different integer other than 1 to indicate different types 
        of errors.
*/

// ? what should we prefer if-else or switch ?
/*
if we don't know the exact value which can be inputted by the user but, we know
the range between the value can exist, then we should use if else block.

if we know some exact values which can be inputted by the user, then we should
use switch statement.
*/