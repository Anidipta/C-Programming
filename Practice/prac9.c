#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n,tmp,k;
    int *arr;
    printf("Enter number of elements :");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        printf("Enter elements of the array :");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        for(j=0;j<n/2-i;j++){
            if(arr[j]>arr[j+1]){
                tmp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(i=n/2+1;i<n;i++){
        for(j=n/2+1,k=0;j<n-k;j++,k++){
            if(arr[j]<arr[j+1]){
                tmp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    printf("The sorted array : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}