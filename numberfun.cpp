#include "numberfun.h"

NumberFun::NumberFun(int value1, int value2, int value3, int value4)
{
    setValues(value1, value2, value3, value4);  // calls function setValues
}

void NumberFun::setValues(int a, int b, int c, int d)
{
    // calls appropriate set functions for each data member
    setNum1(a);
    setNum2(b);
    setNum3(c);
    setNum4(d);
}

// set functions simply assign a value to each data member
void NumberFun::setNum1(int num)
{
    num1 = num;
}

void NumberFun::setNum2(int num)
{
    num2 = num;
}

void NumberFun::setNum3(int num)
{
    num3 = num;
}

void NumberFun::setNum4(int num)
{
    num4 = num;
}

// get functions simply return the value of the data member
int NumberFun::getNum1()
{
    return num1;
}

int NumberFun::getNum2()
{
    return num2;
}

int NumberFun::getNum3()
{
    return num3;
}

int NumberFun::getNum4()
{
    return num4;
}

// merely adds up the values of all data members
int NumberFun::sum()
{
    int result = num1 + num2 + num3 + num4;
    return result;
}

// finds the average of the 4 data members
int NumberFun::average()
{
    return (getNum1() + getNum2() + getNum3() + getNum4()) / 4;
}

// multiplies all the data members to find their product
int NumberFun::product()
{
    return num1 * num2 * num3 * num4;
}

// finds the smallest of the 4 data members
int NumberFun::smallest()
{
    int smallestNum = num1;     // assigns num1 as the smallest number

    if(num2 < smallestNum)      // determines if num2 is smaller than the previosuly initialized smallest number
        smallestNum = num2;     // assigns num2 as the smallest number if num2 is smaller than smallestNum
    if(num3 < smallestNum)
        smallestNum = num3;
    if(num4 < smallestNum)
        smallestNum = num4;

    return smallestNum;
}

// finds the largest of the 4 data members
int NumberFun::largest()
{
    int largestNum =  num1;     // assigns num1 as the largest number

    if(num2 > largestNum)       // determines if num2 is larger than the previosuly initialized largest number
        largestNum = num2;      // assigns num2 as the largest number if num2 is larger than largestNum
    if(num3 > largestNum)
        largestNum = num3;
    if(num4 > largestNum)
        largestNum = num4;

    return largestNum;
}
