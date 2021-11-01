#include <stdio.h>

int main(){

    int fnum, i, j, k, l;
    scanf("%d", &fnum);
    int num=fnum-1;

    for ( i=0; i<num; i++ ){

        for ( j=0; j<i; j++ ){
            printf(" ");
        }
        printf("*");
        for ( j=i; j<num; j++ ){
            printf(" ");
        }

        for ( j=i+1; j<num; j++ ){
            printf(" ");
        }
        printf("*");
        for ( j=1; j<i; j++ ){
            printf(" ");
        }
        printf("\n");
    }

    for ( i=0; i<num; i++ ){
        printf(" ");
    }
    printf("*");

    return 0;
}