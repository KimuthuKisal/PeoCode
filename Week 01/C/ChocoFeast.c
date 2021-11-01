#include <stdio.h>

int main(){

    long plates, gold, silver;
    scanf("%ld %ld %ld", &plates, &gold, &silver);

    if ( silver == gold ){
        printf("%ld ", plates*gold);
    } else if ( silver<gold ){
        for ( long i=0; i<=plates; i++ ){
            printf("%ld ", i*gold+(plates-i)*silver);
        }

    } else {
        
        for ( long i=0; i<=plates; i++ ){
            printf("%ld ", i*silver+(plates-i)*gold);
        }
    }

    return 0;
}