#include <stdio.h>
#include <cs50.h>

int main(void){
    int h = 0;
    do{
        h = get_int("What is the heigth:");
    }while (h<1 ||h>8);

    for(int i =1; i<=h; i++){
        for(int k = h; k>i; k--){
            printf(" ");
        }
        for(int j = 1; j<=i; j++){
            printf("#");
        }

        printf("\n");
    }
}