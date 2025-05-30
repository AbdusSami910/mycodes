#include<stdio.h>
#include<limits.h>
int secondmax(int arr[],int n){
        int max=INT_MIN;
        int smax=INT_MIN;
        for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    return (max+smax);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d\n",secondmax(arr,n));
    }
}