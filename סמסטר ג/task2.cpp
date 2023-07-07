#include <iostream>

using namespace std;

struct Clock {
    int h;
    int m;
    int s;
};

void swap1(int *p1, int *p2);
void swap2(int &p1, int &p2);
Clock myTimeClone(const Clock &myTime);

void a(Clock a);
int main()
{   
    int val1 = 5, val2 = 10;

    swap1(&val1, &val2);
    cout << "swap1 - val1: " << val1 << " swap1 - val2: " << val2 << endl;

    swap2(val1, val2);
    cout << "swap2 - val1: " << val1 << " swap2 - val2: " << val2 << endl;

    // ============================================================================= Q.1

    Clock original = { 1,2,3 };
    Clock copied = myTimeClone(original);
    original.h = 5;
    cout << "original: " << original.h << endl;
    cout << "copied: " << copied.h << endl;

    // ============================================================================= Q.2
};


void swap1(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
};

void swap2(int &p1, int &p2) {
    int temp = p1;
    p1 = p2;
    p2 = temp;
};

Clock myTimeClone(const Clock &myTime) {
    Clock copiedTime;
    copiedTime = myTime;
    return copiedTime;
};
