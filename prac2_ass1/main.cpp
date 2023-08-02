#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int amountstudents = 0;
    double sum = 0.0, average, mark;
    double highest = 0;
    double lowest = 9999;
    cout << "Enter amount of students: ";
    cin >> amountstudents;
    cout << endl;

    int number = 1;
    while (number <= amountstudents)
    {
        cout << "Enter mark for student " << number << ": ";
        cin >> mark;
        cout << endl;
        number++;
        sum += mark;
        if (mark < lowest){
            lowest = mark;
        }
        if (mark > highest){
            highest = mark;
        }
    }
    cout << "******************************************************************";
    cout << endl;
    average = sum / amountstudents;
    cout << "The highest mark was: " << highest << endl;
    cout << endl;
    cout << "The lowest mark was: " << lowest << endl;
    cout << endl;
    cout << "The average mark was: " << average << endl;
    cout << endl;
    cout << "******************************************************************";



    return 0;
}
