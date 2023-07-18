#include <stdio.h>
#include <cs50.h>

int main(void){
    long number = get_long("Kredi kart numarası giriniz: ");
    long check = number;
    int counter= 0;
    int ilk_iki =0;
    while(check>0){
        if(check >10 && check <100 ){
            ilk_iki = check;
        }
        counter ++;
        check /=10;
    }
    if((counter != 13) && (counter != 15) && (counter !=16)){
        printf("INVALID\n");
    }
    else{
        int a=0,b=0,c=0;
        while (number > 0){
            a += number%10;
            number /=10;
            if(number >0 ){
                c = (number%10) *2;
                b = b+ c/10 + c%10;
                number /= 10;
            }
        }
        int kalan = (a+b)%10;
        if(kalan != 0){
        printf("INVALID\n");
        }
        else if(kalan == 0){
            if((counter == 15) && ((ilk_iki == 34) || (ilk_iki == 37))){
                printf("AMEX\n");
            }
            else if((counter == 16) && ((ilk_iki == 51) || (ilk_iki == 52)|| (ilk_iki == 53) || (ilk_iki == 54) || (ilk_iki == 55)) ){
            printf("MASTERCARD\n");
            }
            else if(((counter == 13) || (counter == 16)) && (ilk_iki/10 ==4)){
            printf("VISA\n");
            }
            else{
            printf("INVALID\n");
            }
        }
    }


}


