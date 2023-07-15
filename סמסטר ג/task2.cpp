#include <iostream>

using namespace std;
#define DATES_SIZE 5

struct MyDate {
    int day;
    int month;
    int year;
};

void swapPointer(int *p1, int *p2);
void swapRef(int &p1, int &p2);
int checkDate(int &day, int &month, int &year);
MyDate *saveDates(unsigned numDates);
int printDates(MyDate *dates, unsigned size);

int main()
{   
    int val1 = 5, val2 = 10;

    swapPointer(&val1, &val2);
    cout << "swap pointer - val1: " << val1 << " swap pointer - val2: " << val2 << endl;

    swapRef(val1, val2);
    cout << "swap ref - val1: " << val1 << " swap ref - val2: " << val2 << endl;

    MyDate *dates = saveDates(DATES_SIZE);
    printDates(dates, DATES_SIZE);

    delete [] dates;
};

void swapPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
};

void swapRef(int &p1, int &p2) {
    int temp = p1;
    p1 = p2;
    p2 = temp;
};

int checkDate(int &day, int &month, int &year) {
    if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31)) return 0;
    swapRef(day, month);
    return 1;
};

MyDate *saveDates(unsigned numDates) {
    int i;
    MyDate date;
    MyDate *dates = new MyDate[numDates];

    for (i = 0; i < numDates; i++) {
        cout << "enter day" << endl;
        cin >> date.day;
        cout << "enter month" << endl;
        cin >> date.month;
        cout << "enter year" << endl;
        cin >> date.year;

        dates[i] = date;
        cout << "entered day: " << dates[i].day << endl;
    };

    return dates;
};

int printDates(MyDate *dates, unsigned size) {
    int i, counter = 0;

    for (i = 0; i < size; i++) {
        if (checkDate(dates[i].day, dates[i].month, dates[i].year)) counter++;
        cout << "date: " << dates[i].day << "/" << dates[i].month <<  "/" << dates[i].year << endl;
    };

    counter && cout << "found " << counter << " invalid dates!!!" << endl;
    return counter;
};
