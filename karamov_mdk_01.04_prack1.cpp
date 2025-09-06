#include <iostream>

int FindSumOfDigits(int number)
{
    int sum = 0;
    do
    {

        sum += number % 10;
        number = number / 10;

    } while (number > 0);

    return sum;

}

int FindDigitalRoot(int number)
{

    while (number >= 10)
    {

        number = FindSumOfDigits(number);

    }

    return number;
}

int main()
{
    int a;
    int b;
    int count = 0;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

        while (a != b)
        {
            int root1 = FindDigitalRoot(a);

            int root2 = FindDigitalRoot(b);

            if (a > b)
            {
                if (root1 < root2)
                {
                    a -= root1;
                }
                else
                {
                    a -= root2;
                }
            }
            else
            {
                if (root1 < root2)
                {
                    b -= root1;
                }
                else
                {
                    b -= root2;
                }
            }
            count++;
        }
        std::cout << count;
        int x;
        std::cin >> x;
}

