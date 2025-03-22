#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 8


int main(){
    system("chcp 65001");
    int array[N], i;
    puts("Введіть 8 цифр: ");

    for (i = 0; i < N ; i+=1) { 
    scanf("%i", &array[i]);
    }
    
    int sum = 0; 
    int count = 0; 
    int count_geometric = 0;
    int multiplication = 1;


    for (i = 0; i < N ; i+=1 ) { 
    if ( array[i] % 2 == 0 ){
        sum+=array[i];
        count+=1;
    }
    else {
        multiplication*=array[i];
        count_geometric +=1;
    }
    }
    
    int max = array[0];
    int number = 0;  

    for (i = 0; i < N ; i+=1){
        if(array[i]>max){
            max = array[i];
            number = i;
        }
    }

    printf("в) Максимальне значення: %d\tЙого номер становить: %d\t\n", max, number+1);

    float averageG;

    if (count_geometric > 0) {
    printf("б) Добуток непарних чисел: %.1d\n", multiplication);
    averageG = pow(multiplication, 1.0/count_geometric);
    printf("Середнє геометричне значення непарних чисел: %.2f\n", averageG);
    }
    else{
        puts( "Всі числа парні, спробуйте інші! Добуток непарних чисел і їх середнє геометричне значення неможливе!");
    }

    printf("a) Сума парних чисел: %i\n", sum);

    float averageA = 0;
    if(count){
        averageA = (float)sum / count;
    }
    printf("Середнє арифметичне значення парних чисел: %.1f\n", averageA);
    
    return 0;
}