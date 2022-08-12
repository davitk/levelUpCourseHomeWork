#include <iostream>
using namespace std;

int countOdd(int firstNumber, int lastNumber){

    int countOfOddNumbers = (lastNumber - firstNumber) / 2;

    if (lastNumber % 2 != 0 || firstNumber % 2 != 0)
        countOfOddNumbers += 1;

    return countOfOddNumbers;
}

int main()
{
    int firstNumber = 3, lastNumber = 13;
    int odds = countOdd(firstNumber, lastNumber);

    cout << "Count of odd numbers is " << odds << endl;
    return 0;
}