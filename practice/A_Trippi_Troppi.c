#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int str1[10],str2[10],str3[10];
        scanf("%s %s %s",str1,str2,str3);
        printf("%c%c%c\n",str1[0],str2[0],str3[0]);
    }
    return 0;
}