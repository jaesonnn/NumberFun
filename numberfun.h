#ifndef NUMBERFUN_H
#define NUMBERFUN_H

class NumberFun
{
public:
    NumberFun(int value1, int value2, int value3, int value4);

    // set functions
    void setValues(int a, int b, int c, int d);
    void setNum1(int num);
    void setNum2(int num);
    void setNum3(int num);
    void setNum4(int num);

    // get functions
    int getNum1();
    int getNum2();
    int getNum3();
    int getNum4();

    // mathematical functions
    int sum();
    int average();
    int product();
    int smallest();
    int largest();

private:
    int num1;
    int num2;
    int num3;
    int num4;
};

#endif // NUMBERFUN_H
