#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[200];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //printing the values
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
