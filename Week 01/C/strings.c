#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char name1[50];
    char name2[50];

    scanf("%[^\n]%*c", name1);
    scanf("%[^\n]%*c", name2);

    // scanf(" %[^\n]", name1);
    // scanf(" %[^\n]", name2);

    // fgets(name1, 100, stdin);
    // fgets(name2, 100, stdin);

    int len1 = strlen(name1);

    for ( int i=0; name1[i]!='\0'; i++ ){
        if ( name1[i]>='A' && name1[i]<='Z' ){
            name1[i] = name1[i] + 32;
        }
    }

    for ( int i=0; name2[i]!='\0'; i++ ){
        if ( name2[i]>='A' && name2[i]<='Z' ){
            name2[i] = name2[i] + 32;
        }
    }


    for ( int i=0; i<len1; i++ ){
        if ( name1[i] > name2[i] ){
            printf("1");
            exit(0);
        }
        if ( name2[i] > name1[i] ){
            printf("-1");
            exit(0);
        }
    }
    printf("0");
}