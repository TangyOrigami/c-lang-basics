#include <stdio.h>

int main(void) {
    // Variable Declaration

    char myLetter = 'D';

    char myText = 'Hello';

    char myText2[] = "Hello";

    int myNum = 15;

    int x = 5, y = 6, z = 7;

    float myFloatNum = 5.99;

    double sum = myNum + myFloatNum;

    float f1 = 35e3;

    double d1 = 12E4;

    // Format Printing

    printf("%d\n",x + y +z);

    x = y = z = 50;

    printf("%d\n",x + y +z);

    printf("%f\n", sum);

    printf("My number is %d and my letter is %c\n",myNum, myLetter);

    printf("%c\n", myText);

    printf("%s\n", myText2);

    printf("%f\n", f1);

    printf("%lf\n", d1);

    printf("%.1f\n", f1);

    printf("%.2lf\n", d1);

    printf("%lu\n", sizeof(myNum));

    float div = (float) 5 / 2;

    printf("%f\n", div);
}
