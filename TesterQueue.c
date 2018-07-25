#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StackQnque.h"
#include <time.h>

int main()
{
    Queue Q = initQ();
    char arr[100];
    char a[100];
    int i=0;
    char zero='a';
   // printf("Enter the character for enQ data and 0 to terminate: ");
    while(zero != '0'){
        printf("Enter the character for enQ data and 0 to terminate: ");
            scanf("%c", &zero);
            arr[i]=zero;
            i++;
            fflush(stdin);

    }
    for (int dex = 0; dex < i-1; dex++){
            enQ(Q, arr[dex]);
       }

    while (!isEmpty(Q)){
    printf("%c\t", deQ(Q));
    }
    printf("\n");
   /* for (int dex = 0; dex < strlen(arr); dex++){
           printf("%c\t", arr[dex]);
   }*/

    return 0;
}

