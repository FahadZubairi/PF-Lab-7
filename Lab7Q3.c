#include<stdio.h>
int main(){
    int max,n,i,min;
    printf("Enter the number of Elements:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d values: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
     
    }
    max = array[0];
    min = array[0];
    for(i=1;i<n;i++){
        if(array[i]>max){
            max = array[i];
        }
        if(array[i]<min){
            min = array[i];
        }
            
    }
    printf("Maximum number = %d\n",max);
    printf("Minimum number = %d\n",min);
    return 0;    
}
    
    
