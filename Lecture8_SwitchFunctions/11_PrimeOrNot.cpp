#include <iostream>
// using namespace std;

bool isPrime(int n);

int main()
{
    int n;
    std::cout <<"enter n: "; 
    std::cin >> n;

    bool answer = isPrime(n);
    
    std::cout << answer << std::endl;
    return 0;
}

bool isPrime(int n)
{
    int i=2;
    bool a;
    while (i < n)
    {
        if (n % i == 0)
        {
            a = 0;
            break;
        }
        else
        {
            a = 1;
        }
        i++;
    }
    return a;
}
//* 1 --> Prime
//* 0 --> NotPrime