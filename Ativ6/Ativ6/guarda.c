#include <stdio.h>

int main(){
    int i, num;


    for ( i = 1; i <= 175; i++) {

        num = i;

        printf("num de %d e %d \n", i, num * num);

        i = num;
    }

    

}