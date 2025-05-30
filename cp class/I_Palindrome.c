#include<stdio.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int size=0;
    for(int i=0;str[i]!='\0';i++){
        size++;
    }
    for(int i=0;i<=size/2;i++){
        if(str[i]!=str[size-1-i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}