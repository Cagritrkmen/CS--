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
        for(int z =0; z<=1; z++){
            printf(" ");
        }
        for(int y = 1; y<= i; y++){
            printf("#");
        }
        printf("\n");
    }
}