#include <iostream>
using namespace std;

#include "numberfun.h"

int main()
{
    int value1, value2, value3, value4;
    cout << "Please enter 4 integers: ";
    cin >> value1 >> value2 >> value3 >> value4;

    NumberFun mathFun(value1, value2, value3, value4);      // created a NumberFun object

    cout << "Num1 has the value: " << mathFun.getNum1() << endl;
    cout << "Num2 has the value: " << mathFun.getNum2() << endl;
    cout << "Num3 has the value: " << mathFun.getNum3() << endl;
    cout << "Num4 has the value: " << mathFun.getNum4() << endl << endl;

    cout << "The sum of the 4 integers is: " << mathFun.sum() << endl;
    cout << "The average of the 4 integers is: " << mathFun.average() << endl;
    cout << "The product of the 4 integers is: " << mathFun.product() << endl;
    cout << "The smallest of the 4 integers is: " << mathFun.smallest() << endl;
    cout << "The largest of the 4 integers is: " << mathFun.largest() << endl << endl;

    cout << "***************************************" << endl << endl;

    // ANOTHER WAY TO DO THE ABOVE IS:
    cout << "Please enter a new number for num1: ";
    cin >> value4;

    mathFun.setNum1(value4);        // this will change the value of num1 only
    // num1, num2, and num3 will remain the same since setNum2(), setNum3(), and setNum4() weren't called

    int sum = mathFun.sum();
    float average = mathFun.average();
    int product = mathFun.product();
    int smallest = mathFun.smallest();
    int largest = mathFun.largest();

    cout << "Num1 has the value: " << mathFun.getNum1() << endl;
    cout << "Num2 has the value: " << mathFun.getNum2() << endl;
    cout << "Num3 has the value: " << mathFun.getNum3() << endl;
    cout << "Num4 has the value: " << mathFun.getNum4() << endl << endl;

    cout << "The sum of the 4 integers is: " << sum << endl;
    cout << "The average of the 4 integers is: " << average << endl;
    cout << "The product of the 4 integers is: " << product << endl;
    cout << "The smallest of the 4 integers is: " << smallest << endl;
    cout << "The largest of the 4 integers is: " << largest << endl << endl;

    return 0;
}
