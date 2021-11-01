#include <stdio.h>

int main(){

    int size;
    scanf("%d", &size);

    int no_snakes;
    scanf("%d", &no_snakes);
    int arr_snake[no_snakes][2];
    for ( int i=0; i<no_snakes; i++ ){
        scanf("%d %d", &arr_snake[i][0], &arr_snake[i][1]);
    }

    int no_ladders;
    scanf("%d", &no_ladders);
    int arr_ladder[no_ladders][2];
    for ( int i=0; i<no_ladders; i++ ){
        scanf("%d %d", &arr_ladder[i][0], &arr_ladder[i][1]);
    }

    int count=1, throws=0;

    while ( count<size ){
        throws++;
        count++;

        for ( int i=0; i<no_snakes; i++ ){
            // if ( arr_ladder[i][0] == count ){
            //     count = arr_ladder[i][1];
            // }
            if ( arr_snake[i][1] == count ){
                count = arr_snake[i][0];
                // break;
            }
        }

        for ( int i=0; i<no_ladders; i++ ){
            if ( arr_ladder[i][0] == count ){
                count = arr_ladder[i][1];
            }
            // if ( arr_snake[i][1] == count ){
            //     count = arr_snake[i][0];
            // }
        }

    }

    printf("%d", throws);

    return 0;
}