#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    int array[n];
    printf("Input %d values: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    
    }
    for(i=n-1;i>-1;i--){
        printf("%d",array[i]);
    }
    return 0;

}