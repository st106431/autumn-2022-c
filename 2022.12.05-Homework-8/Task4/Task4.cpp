#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

char** createArray(int length, int wide)
{
    char** mas { };
    mas = new char* [length];
    for (int i = 0; i < length; ++i)
    {
        mas [i] = new char [wide];
    }
    return mas;
}

void deleteArray(char** mas)
{
    delete[] mas;
}

int length(char** mas)
{
    return sizeof(mas) / sizeof(mas[0]);
}

int wide(char** mas)
{
    return sizeof(mas[0]) / sizeof(mas[0][0]);
}

char** add_element(char** mas, char* str)
{
    char** res = createArray(length(mas) + 1, wide(mas));
    for (int i = 0; i < length(mas); ++i)
    {
        for (int k = 0; k < wide(mas); ++k) 
        {
            res[i][k] = mas[i][k];
        }
    }
    for (int j = 0; j < sizeof(str) / 8; ++j)
        {
            res[length(mas)][j] = str[j];
        }
    delete[] mas;
    delete[] str;
    return res;
}

char** add_mas(char** mas, char** add)
{
    char** res = NULL;
    
    int length_1 = length(mas);
    int length_2 = length(add);
    int v = wide(mas);
    res = createArray(length_1 + length_2, wide(mas));
    for (int i = 0; i < length_1 + length_2; ++i)
    {
        for (int j = 0; j < v; ++j)
        if (i < length_1)
        {
            res[i][j] = mas[i][j];
        }
        else
        {
            res[i][j] = add[i - length_1][j];
        }
    }
    delete[] mas;
    delete[] add;
    return res;
}

char* to_char(std::string str)
{
    char* mas = new char[str.length()];
    for (int i = 0; i < str.length(); ++i)
    {
        mas[i] = str[i];
    }
    return mas;
}

std::string to_string(char* mas)
{
    std::string res(sizeof(mas) / 8, '0');
    for (int i = 0; i < sizeof(mas) / 8; ++i)
    {
        res[i] = mas[i];
    }
    return res;
}

char** xan(int n, int from, int to)
{
    if (n <= 0)
    {
        return NULL;
    }
    int tmp = 6 - from - to;
    char* s_from_1{ 0 };
    char* s_from_2{ 0 };
    _itoa(from, s_from_1, 10);
    _itoa(to, s_from_2, 10);
    std::string s = "Disk n move from" + to_string(s_from_1) + "to" + to_string(s_from_2);
    return (add_mas(add_element(xan(n - 1, from, tmp), to_char(s)), xan(n - 1, tmp, to)));
}

int main(int argc, char* argv[])
{
    int n = 0;
    //std::cin >> n;
    int a = length(xan(n, 1, 2));
    int b = wide(xan(n, 1, 2));
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            std::cout << xan(n, 1, 2)[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}