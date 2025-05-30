#include<stdio.h>
int main(){
    int x, y,count=0;
    scanf("%d %d", &x, &y);
    while(y>x){
        if(y%3==0){
            y=y/3;
        }
        else{
            y++;
        }
        count++;
    }
    count=count + (x-y);
    printf("%d", count);
    return 0;
}