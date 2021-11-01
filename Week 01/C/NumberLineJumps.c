// #include <stdio.h>

// int main(){

//     long x1, x2, v1, v2;
//     scanf("%ld %ld %ld %ld", &x1, &v1, &x2, &v2);

//     long distancedif = x2 - x1;
//     if (distancedif<0){
//         distancedif = -distancedif;
//     }

//     long jumpdif = v1 -v2;
//     if ( jumpdif<0){
//         jumpdif = -jumpdif;
//     }

//     if ( x1==x2 ){
//         if ( v1 == v2 ){
//             printf("YES");
//         } else {
//             printf("NO");
//         }

//     } else if ( x1<x2 ){
//         if ( v1<=v2 ){
//             printf("NO");
//         } else {
//             if ( distancedif % jumpdif == 0 ){
//                 printf("YES");
//             } else {
//                 printf("NO");
//             }
//         }

//     } else {
//         if ( v2<=v1 ){
//             printf("NO");
//         } else {
//             if ( distancedif % jumpdif == 0 ){
//                 printf("YES");
//             } else {
//                 printf("NO");
//             }
//         }
//     }

//     return 0;
// }


#include <stdio.h>

int main(){

    long x1, x2, v1, v2;
    scanf("%ld %ld %ld %ld", &x1, &v1, &x2, &v2);

    long distancedif = x2 - x1;
    if (distancedif<0){
        distancedif = -distancedif;
    }

    long jumpdif = v1 -v2;
    if ( jumpdif<0){
        jumpdif = -jumpdif;
    }

    
    
    
    if ( x1==x2 && v1 == v2 ){
        printf("YES");
        
    } else if( x1>x2 && v1>v2 ){
        printf("NO");

    }else if( x1<x2 && v1<v2 ){
        printf("NO");

    }else if( x1>x2 && v1<v2 ){
        int n = 0;
        while( (x1+n*v1) > (x2+n*v2) ){
            n++;
        }

        if( (x1+n*v1) == (x2+n*v2) ){
                printf("YES");
            }else{
                printf("NO");
            }

    }else if( x1<x2 && v1>v2 ){
        int n = 0;
        while( (x1+n*v1) < (x2+n*v2) ){
            n++;
        }

        if( (x1+n*v1) == (x2+n*v2) ){
                printf("YES");
            }else{
                printf("NO");
            }
    }else{
        printf("YES");
    }
    
    return 0;
}