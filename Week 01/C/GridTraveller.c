#include <stdio.h>

int main(){

    int size;
    scanf("%d", &size);
    int arr[size][size];

    for ( int i=0; i<size; i++ ){
        for ( int j=0; j<size; j++ ){
            scanf("%d", &arr[i][j]);
            if ( arr[i][j] == 1 ){
                printf("%d %d", j+1, i+1);
                // exit(0);
            }
            
        }
    }

    return 0;
}