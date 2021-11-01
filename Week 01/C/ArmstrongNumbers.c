#include <stdio.h>

int main(){

    int min, max;
    scanf("%d %d", &min, &max);

    for ( int i=min; i<=max; i++ ){
        int armsVal=0;
        int val=i, rem;

        while ( val>0 ){
            rem = val%10;
            armsVal = armsVal + rem*rem*rem;
            val = val/10;
        }

        if ( armsVal==i ){
            printf("%d\n", i);
        }
    }

    return 0;
}