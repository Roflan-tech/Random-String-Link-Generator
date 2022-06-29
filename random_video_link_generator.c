#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char data[]="1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    time_t t;
    //srand((unsigned) time(&t));
    char out[11];
    int n = 11;
    char tmp;
    int number;

    printf("Press Enter to generate string(press anything else to exit)\n");

    while(1){
        scanf("%c", &tmp);
        if(tmp == '\n'){
        for(int i = 0; i < n; i++){
            number = rand() % 63;
            out[i] = data[number];
        }
        for(int i = 0; i < n; i++){
            printf("%c", out[i]);
        }
        }
        else{
        printf("Exit\n");
        return 0;
        }
    }
}