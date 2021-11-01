#include <stdio.h>

int main(){

    int days;
    scanf("%d", &days);
    double arr2[days];

    for ( int i=0; i<days; i++ ){

        int bills;
        scanf ("%d", &bills);
        int amount;
        double retVal=0;

        for ( int j=1; j<=bills; j++ ){
            scanf("%d", &amount);

            if ( j%2==0 && amount%2==0 ){
                retVal = retVal + amount/10.0;
            }

        }

        arr2[i] = retVal;
    }

    for ( int i=0; i<days; i++ ){
        printf("%.2lf\n", arr2[i]);
    }

    return 0;
}