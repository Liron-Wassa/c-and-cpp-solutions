#include <iostream>
using namespace std;

class Square {
    int x;
    int y;
    int sideLength;

    public:
        Square(int x, int y, int sideLength) {
            this->x = x;
            this->y = y;
            this->sideLength = sideLength;
        };

        void setX(int x) {
            this->x = x;
        };

        void setY(int y) {
            this->y = y;
        };

        int getX() {
            return this->x;
        };

        int getY() {
            return this->y;
        };

        void setLength(int sideLength) {
            this->sideLength = sideLength;
        };
        
        void printSquareProperty() {
            cout << "x: " << this->x << " y: " << this->y << " length: " << this->sideLength << endl;
        };

        int calcArea() {
            return this->sideLength * this->sideLength;
        };

        bool isPointInsideSquare(int x, int y) {
            int xTopLeft = this->x;
            int yTopLeft = this->y + this->sideLength;
            int xTopRight = xTopLeft + this->sideLength;
            int yTopRight = yTopLeft;
            int xBottomRight = xTopRight;
            int yBottomRight = this->y;

            if (x >= this->x &&
                x <= this->x + this->sideLength &&
                y >= this->y &&
                y <= this->y + this->sideLength
            ) return true;

            return false;
        };
};


class Circle {
    double x;
    double y;
    double r;
    const float PI = 3.14;

    public:
        Circle(int x, int y, int r) {
            this->x = x;
            this->y = y;
            this->r = r;
        };

        Circle(int r) {
            this->r = r;
        };

        void setX(int x) {
            this->x = x;
        };

        void setY(int y) {
            this->y = y;
        };

        void setR(int r) {
            this->r = r;
        };

        double getX() {
            return this->x;
        };

        double getY() {
            return this->y;
        };

        double getR() {
            return this->r;
        };

        double calcArea() {
            return this->PI * this->r * this->r;
        };

        double calcCircumference() {
            return 2 * this->PI * this->r;
        };
};

int main () {
    Square square(10, 5, 5);
    cout << square.isPointInsideSquare(15, 7) << endl;

    Circle circle(0, 0, 5);
    cout << circle.calcArea() << endl;
    cout << circle.calcCircumference() << endl;

    return 0;
};
