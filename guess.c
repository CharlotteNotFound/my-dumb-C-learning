#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main(){

    srand (time(0));

    int secret = rand() % 100 +1;

    int guess , attempts =0;

    printf("猜数字游戏开始\n");
    do {
        printf("输入你的猜想：");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) printf("大了!\n");
        else if (guess < secret) printf("小了!\n");
        else printf("congratulations,you succeed after %d times ",attempts);
    
    }while (guess != secret);

    return 0;


}