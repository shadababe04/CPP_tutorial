/**
 * @file main.cpp
 * @author shadab (TE434973)
 * @brief 
 * @version 0.1
 * @date 2022-08-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
/**
 * @brief Class Complex
 * 
 */
class Complex
{
    private:
    int a,b;
    public:
    /**
     * @brief Construct a new Complex object
     * 
     * @param x 
     * @param y 
     */
    Complex(int x, int y)
    {
        a=x;
        b=y;
    }
    /**
     * @brief Construct a new Complex object
     * 
     * @param x 
     */
    Complex(int x) //construcor overloading
    {
        a=x;
    }
    /**
     * @brief Construct a new Complex object
     * 
     */
    Complex() //constructor overloading
    {
        a=0;
        b=0;
    }
};

/**
 * @brief main
 * 
 * @return int 
 */
int main()
{
    Complex c1(3,4),c2(5),c3=6,c4;
    return 0;
}