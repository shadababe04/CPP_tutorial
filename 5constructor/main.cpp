/**
 * @file main.cpp
 * @author shadab (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-19
 * @
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
/**
 * @brief Complex class
 * 
 */
class Complex
{
    private:
    int a, b;
    public:
/**
 * @brief Construct a new Complex objectl
 * 
 */
    Complex()
    {
        cout<<"Hello Constructor";
    }
};

int main()
{
    Complex c1,c2,c3;//3 times object means constructor call 3 times
    return 0;
}