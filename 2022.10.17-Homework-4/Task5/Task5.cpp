#include <iostream>

int main(int argc, char* argv[])
{
    int N = 0;
    double sum = 1;
    double mult = 1;
    std::cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        mult *= i;
        sum += 1.0 / mult;
    }
    printf("%3.5lf", sum);
    return EXIT_SUCCESS;
}
