#include <iostream>

using namespace std;

struct Clock {
    int h;
    int m;
    int s;
};

void formateToLlegalTime(Clock &clock);
void getTimes(int value, Clock *&times, int &size);
void printInFormat24(Clock clock);
void printClockListInFormat24(Clock *clock, int size);
void swap1(int *p1, int *p2);
void swap2(int &p1, int &p2);

int main()
{   
    int value, size;
    Clock *times = NULL;

    cout << "How many values?:" << endl;
    cin >> value;

    getTimes(value, times, size);

    printClockListInFormat24(times, size);

    delete[] times;
};

void formateToLlegalTime(Clock &clock) {
    int seconds = clock.s;
    int minutes = clock.m;
    int hours = clock.h;

    clock.s = seconds % 60;
    clock.m = (seconds / 60 + minutes) % 60;
    clock.h = ((seconds / 60 + minutes) / 60 + hours) % 24;
};

void getTimes(int value, Clock *&times, int &size) {
    int i;

    size = 0;
    times = new Clock[value];

    for (i = 0; i < value; i++) {
        cout << "Enter hours" << endl;
        cin >> times[i].h;
        cout << "Enter minutes" << endl;
        cin >> times[i].m;
        cout << "Enter seconds" << endl;
        cin >> times[i].s;
        size++;
    
        if (times[i].s > 60 || times[i].m > 60 || times[i].h > 24) {
            formateToLlegalTime(times[i]);
        };
    };
};

void printInFormat24(Clock clock) {
    int hour = clock.h % 24;
    int minutes = clock.m % 60;
    int second = clock.s % 60;

    if (hour < 9) cout << "0" << hour;
    else cout << hour;
    cout << ":";
    if (minutes < 9) cout << "0" << minutes;
    else cout << minutes;
    cout << ":";
    if (second < 9) cout << "0" << second;
    else cout << second;
    cout << endl;
};

void printClockListInFormat24(Clock *clock, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printInFormat24(clock[i]);
    };
};
