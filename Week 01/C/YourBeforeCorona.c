#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

    int year;
    scanf("%d", &year);
    bool isEqual=true;
    int next;
    int arr[4];

    while ( isEqual == true ){

        year++;
        next = year;

        arr[3] = next%10;
        next = next/10;
        arr[2] = next%10;
        next = next/10;
        arr[1] = next%10;
        next = next/10;
        arr[0] = next;

        if ( arr[0]==arr[1] || arr[0]==arr[2] || arr[0]==arr[3] || 
            arr[1]==arr[2] || arr[1]==arr[3] ||arr[2]==arr[3] ){
                continue;
            } else {
                 printf("%d\n", year);
                 exit(0);
            }

    }    

    return 0;
}