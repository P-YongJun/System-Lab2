#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>

int main(){
    char math[10];
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    printf("사칙연산을 입력해주세요 : ");
    scanf("%s", math);

    printf("number : ");
    scanf("%d %d", &num1, &num2);

    if(strcmp(math, "add") == 0){
        result = add(num1, num2);
        printf("add = %d\n", result);
    }
    else if(strcmp(math, "sub") == 0 ){
        result = substarct(num1, num2);
        printf("sub = %d\n", result);
    }
    else if(strcmp(math, "mul") == 0 ){
        result = multiply(num1, num2);
        printf("mul = %d\n", result);
    }
    else if(strcmp(math, "div") == 0 ){
        result = divide(num1, num2);
        printf("div = %d\n", result);
    }
}
