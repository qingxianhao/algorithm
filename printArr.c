#include <stdio.h>
void printArr(int* arr, int size)
{
    int i=0;
    printf("[");
    for(i=0;i<size;i+=1){
        printf("\t%5d,", arr[i]);
    }
    printf("]\n");
}

#if 0
#define print(arr,size) do{printf("%d:%s", (__LINE__-3), # arr); printArr((arr),size); } while(0);
#define printInt(var) do{printf("%d:%s is \"", (__LINE__-3), # var); printf("%d\"\n", var); } while(0);
#else
    #define print(arr,size)
    #define printInt(var)
#endif

