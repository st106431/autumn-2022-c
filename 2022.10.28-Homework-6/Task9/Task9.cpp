#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = 0;
    int number_m = 0;
    int current_number = 0;
    int sum = 0;
    int mas[100]{ 0 };
    int max_mas[100]{ 0 };
    int numbers[100]{ 0 };
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> mas[i];
    }
    for (int i = 0; i < n; ++i)
    {
        max = -1;
        number_m = -1;
        for (int j = i; j < n; ++j)
        {
            if (mas[j] > max) 
            {
                max = mas[j];
                number_m = j;
            }
        }
        max_mas[i] = max;
        numbers[i] = number_m;
    }

    while (current_number < n)
    {
        sum += max_mas[current_number] * (numbers[current_number] - current_number + 1);
        current_number = numbers[current_number] + 1;
    }

    std::cout << sum << std::endl;
    return EXIT_SUCCESS;
}
