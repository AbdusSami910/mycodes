#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int j=1;j<=T;j++){
        char str1[5],str2[5],str3[5];
        scanf("%s%s",str1,str2);
        for(int i=0;i<5;i++){
            if(str1[i]==str2[i]) {
                str3[i]='G';
            }
            else{
                str3[i]='B';
            }
        }
        str3[5]='\0';
        printf("%s",str3);
    }
}