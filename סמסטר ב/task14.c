#include <stdio.h>

typedef enum { Int = 1, Double, Char } Type;

typedef union {
    int iNumber;
    double dNumber;
    char str;
} IntOrDoubleOrChar;

typedef struct {
    IntOrDoubleOrChar value;
    Type type;
} three_type;

void getValue(Type type, three_type *threeType);
void printValue(three_type *threeType);
void clearBuffer();
void printLucky();
void runPrintLucky(unsigned int spins);

int main () {

    // ============================================================================= class 14.1

    three_type threeType;
    getValue(Int, &threeType);
    printValue(&threeType);
    printf("=============================\n");
    getValue(Double, &threeType);
    printValue(&threeType);
    printf("=============================\n");
    getValue(Char, &threeType);
    printValue(&threeType);
    printf("=============================\n");

    // ============================================================================= class 14.2

    runPrintLucky(10);
    
    return 0;
}

void getValue(Type type, three_type *threeType) {
    switch (type) {
        case Int: {
            threeType->type = Int;
            printf("Enter a number (int):\n");
            scanf("%d", &threeType->value.iNumber);
            break; 
        }
        case Double: {
            threeType->type = Double;
            printf("Enter a number (double):\n");
            scanf("%lf", &threeType->value.dNumber);
            break; 
        }
        case Char: {
            threeType->type = Char;
            printf("Enter a char:\n");
            clearBuffer();
            scanf("%c", &threeType->value.str);
            break; 
        }
        default:
            break;
    };
};

void printValue(three_type *threeType) {
    switch (threeType->type) {
        case Int: {
            printf("int is %d:\n", threeType->value.iNumber);
            break; 
        }
        case Double: {
            printf("double is %lf:\n", threeType->value.dNumber);
            break; 
        }
        case Char: {
            printf("char is %c:\n", threeType->value.str);
            break; 
        }
        default: break;
    };
};

void clearBuffer() {
    char ch;
    while((ch = getchar()) != '\n' && ch != EOF) {};
};

void printLucky() {
    static int count = 1;
    if (count % 3 == 0) printf("third time lucky\n");
    count++;
};

void runPrintLucky(unsigned int spins) {
    int i;

    for (i = 0; i < spins; i++) {
        printLucky();
    }
}
