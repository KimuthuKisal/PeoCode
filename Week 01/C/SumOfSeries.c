#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);
    double sum=0;

    for ( int i=1; i<=num; i++ ){
        sum = sum + ( 1.0/i );
    }
    printf("%f", sum);

    return 0;
}