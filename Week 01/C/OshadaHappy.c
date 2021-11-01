#include <stdio.h>

int main(){

    int days;
    double hours;
    scanf("%d %f", &days, &hours);

    double pointsD = 50 + 10*days;
    double pointsO = hours*6.0;

    for ( int i=2; i<=days; i++ ){
        
        if ( i%2==0 ){
            hours = hours/2.0;
            pointsO = pointsO + hours*6.0;
        } else {
            hours = hours*3.0;
            if ( hours>=24.0 ){
                hours = 1.0;
            }
            pointsO = pointsO + hours*6.0;
        }

    }

    if ( pointsO>=pointsD ){
        printf("Rodda will win");
    } else {
        printf("Rodda will lose");

    }

    return 0;
}