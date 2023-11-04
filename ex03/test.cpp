#include <iostream>
#include <cmath>

int isPowerOf2OrNot(int n)
{
    int i;

    i = 0;//n == 4, i == 4, 
    if (n % 2 != 0)
        return (0);
    for (i = n; i > 0; i /= 2)
    {
        if (n % i == 0)
        {
            if (i == 1)
                return (1);
        }
    }
    return 0;
}

int main()
{
    int n;
    int returnValue;

    std::cin >> n;
    returnValue = isPowerOf2OrNot(n);
    if (returnValue == 1)
             std::cout << "yes\n";
    else
             std::cout << "no\n";
}