#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, s, l, i, rep;
    scanf("%d", &n);

    if ( n<5 || n>50 || n%2==0){
        return 1;
    } else {
        s=n/2;
        l=n/2+3;
        rep = (n-3)/2;


    //first line
        printf("*");
        for ( i=0; i<l; i++ ){
            printf(" ");
        }
        printf("*");
        for ( i=0; i<=s; i++ ){
            printf(" ");
        }
        for ( i=0; i<l; i++ ){
            printf("*");
        }
        for ( i=0; i<=s; i++ ){
            printf(" ");
        }
        for ( i=0; i<l; i++ ){
            printf("*");
        }
        for ( i=0; i<=s; i++ ){
            printf(" ");
        }
        for ( i=0; i<l; i++ ){
            printf("*");
        }
        printf("\n");
        

    //second line
        for ( int j=0; j<rep; j++ ){

            printf("*");
            for ( i=0; i<l; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<s; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<s+l; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<s+l; i++ ){
                printf(" ");
            }
            printf("*");
            printf("\n");

        }


    //third line
        int k=1;
        if ( n%2==0 ){
            k++;
        }

        for ( int j=0; j<k; j++){
            printf("*");
            for ( i=0; i<l; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<s; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<=s+l; i++ ){
                printf(" ");
            }
            for ( i=0; i<l-1; i++ ){
                printf("*");
            }
            for ( i=0; i<=s; i++ ){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }

        


    //fourth line
        for ( int j=0; j<rep; j++ ){

            printf("*");
            for ( i=0; i<l; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<s; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<s+l+l; i++ ){
                printf(" ");
            }
            printf("*");
            for ( i=0; i<s; i++ ){
                printf(" ");
            }
            printf("*");
            printf("\n");

        }


    //fifth line
        printf(" ");
        for ( i=0; i<l; i++ ){
            printf("*");
        }
        for ( i=0; i<s+2; i++ ){
            printf(" ");
        }
        for ( i=0; i<l; i++ ){
            printf("*");
        }
        for ( i=0; i<s; i++ ){
            printf(" ");
        }
        for ( i=0; i<l; i++ ){
            printf("*");
        }
        for ( i=0; i<s+2; i++ ){
            printf(" ");
        }
        for ( i=0; i<l; i++ ){
            printf("*");
        }
        printf("\n");



        return 0;

    }

    
}