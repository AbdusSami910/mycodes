#include<stdio.h>
#include<string.h>
int main(){
    char str1[21];
    char str2[21];
    scanf("%s %s",str1,str2);
    int size1=0,size2=0,x;
    // int x=strcmp(str1,str2);
    for(int i=0;str1[i]!='\0';i++){
        size1++;
    }
    for(int i=0;str2[i]!='\0';i++){
        size2++;
    }
    if(size1>size2) {
        x=size2;
    }
    else {
        x=size1;
    }
    for(int i=0;i<=x;i++){
        if((int)str1[i]>(int)str2[i]){
            printf("%s",str2);
            return 0;
        }
        else if((int)str1[i]<(int)str2[i]) {
            printf("%s",str1);
            return 0;
        }
    }
    printf("%s",str1);
    return 0;
}