#include <stdio.h>

int main(){

    char character;
    int num1;
    float num2;
    long num3;
    double num4;

    scanf("%c", &character);
    scanf("%d", &num1);
    scanf("%f", &num2);
    scanf("%ld", &num3);
    scanf("%lf", &num4);

    int count=0;

    //first line
    count += printf("%c\n", character);

    //second line
    count += printf("%d\n", num1);
    
    //third line
    count += printf("%o\n", num1);

    //fourth line
    count += printf("%x\n", num1);

    //fifth line
    count += printf("%f\n", num2);

    //sixth line
    count += printf("%ld\n", num3);

    //seventh line
    count += printf("%lf\n", num4);

    //eighth line
    count += printf("%d", count);

}