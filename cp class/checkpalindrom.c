#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[150];
    scanf("%s",str);
    int size= strlen(str);
    char ch='a';
    int odd=0;
    int arr[26]={0};
        for(int i=0;i<size;i++){
            int a=str[i]-'a';
            arr[a]++;
        }
            for(int i=0;i<26;i++){
                if(arr[i]%2!=0){
                    odd++;
                }
                ch++;
            }
            if(odd>1) printf("Impossible");
            else printf("Possible");
}
