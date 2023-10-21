#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

int main(){
    void *handle;
    int (*add)(int, int), (*substract)(int, int), (*multiply)(int, int), (*divide)(int, int);
    char *error;

    handle = dlopen("./lib/libshare.so",RTLD_LAZY);

    if(!handle){
        fputs(dlerror(), stderr);
        exit(1);
    }

    char* str = (char*)malloc(10*sizeof(char));
    int num1,num2;

    printf("사칙연산을 입력하세요: ");
    scanf("%s", str);

    printf("두 숫자를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);

    if(strcmp(str, "add")==0){
        add = dlsym(handle, "add");
        if((error=dlerror()) != NULL){
            fprintf(stderr, "%s", error);
            exit(1);
        }
        printf("add = %d\n", (*add)(num1, num2));
    }
    else if(strcmp(str, "sub")==0){
        substract = dlsym(handle, "substract");
        if((error=dlerror()) != NULL){
            fprintf(stderr, "%s", error);
            exit(1);
        }
        printf("sub = %d\n", (*add)(num1, num2));
    }
    else if(strcmp(str, "mul")==0){
        multiply = dlsym(handle, "multiply");
        if((error=dlerror()) != NULL){
            fprintf(stderr, "%s", error);
            exit(1);
        }
        printf("mul = %d\n", (*add)(num1, num2));
    }
    else if(strcmp(str, "div")==0){
        divide = dlsym(handle, "divide");
        if((error=dlerror()) != NULL){
            fprintf(stderr, "%s", error);
            exit(1);
        }
        printf("div = %d\n", (*add)(num1, num2));
    }
dlclose(handle);
free(str);
}