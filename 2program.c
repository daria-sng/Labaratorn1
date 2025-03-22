#include <stdio.h>
#include <stdlib.h>
#define N 7

int main(){
    system("chcp 65001");

    float array[N] = { 2.4, -4.3, 13, 5.2, -8, 3.1, -12 };
    int i;
    
    float min = array[0];
    int number = 0;

    int beginning = -1;
    int end = -1;

    for ( i = 0; i < N; i+=1){
        if(min > array[i]){
            min = array[i];
            number = i;
        }

        if(array[i] < 0){
            if(beginning == -1){
                beginning = i;
            }
            else{
                end = i;
                break;
            }

        }
    }

    printf("Номер мінімального елемента масиву: %d\n", number+1);

    float sum = 0;
    if (end != -1) {
        for (i = beginning + 1 ; i < end; i+=1) {
            sum+=array[i];
        }
        printf("Сума елементів масиву, розміщених\nміж першим і другим від'ємними елементами: %.1f\n", sum);
    }
    
    return 0;
}