#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv){
    int num;
    FILE *p;
    
    p = fopen("./test.txt","a");
    
    char string[50];
    
    // printf("%s",argv[1]);

    
    // int a;
    // a = strcmp(argv[1],"-clean");

    // printf("%d",a);

    if (argv[1]==NULL){
        return 0;
    }
    else if(!strcmp(argv[1],"--clean")){
        freopen("./test.txt","w",stdout);
    }
    else{
        strcpy(string , argv[1]);
        printf("write: %s\n",string);
        fprintf(p, "%s\n", argv[1]);
    }  



    return 0;
}