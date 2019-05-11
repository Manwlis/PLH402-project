#include "teaclib.h"


/* program */ 

const char *message = "Hello world!\n";
const int c1 = 1;
const double c2 = 1.1;
const int c3 = 0, c4 = 1;
const int ca1[2] = {1, 2};
const char ca3[10] = "message";
int l0;
char l1[80];
int *l2;
int* l2;
int l2, l3 = 1 && c3;

double f1 (double x) {
    int y = f2();
    const double c5 = c1 * c2;

    return x;
}

int f2 () {
    return 5;
}

double* f3 (double x, int y) {
    writeInt(x);
    writeReal(y);
}

int f4 (double x) {
    if (x < 0) {
        return 1;
    }

    return 0;
}

double f6 (double r1, double r2, char *s) {
    if (r1 == r2) {
        writeString(s);
        writeString("\n");
    }
    else {
        if (r1 < r2) {
            writeString("r2\n");
        }
        else {
            writeString("r1\n");
        }
    }

    return (r1 - r2);
}

double f7 (int i1, int i2, int int3, int iefcescv, char *s1, char s2) {
    double x = -c1;

    x = l0 + c1 * (c1 / l0);
    x = 4 + 50.0 * c2 / 2.45;
    x = (c1 + 1) % cube(l0 + 3);
    x = (c1 <= c2) && (l0 <= c1);
    x = (c1 + c2) != (2 * l0);
    x = c1 + ca1[(l0 + 1) * 2];
    while (x < c1) {
        x = f6(x, c2, message);
        x = x - 2.6;
    }

    return x;
}

int main() {
    return 0;
} 

/* Your program is syntactically correct!*/

