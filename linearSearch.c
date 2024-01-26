#include<stdio.h>

int main(){

    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array numbers: ");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);

    }


    int digit,found=0;
    printf("Enter any digit: ");
    scanf("%d",&digit);
    for(int i = 0; i<n; i++){
        if(arr[i]==digit){
            found = 1;
            printf("Found in the position %d",i);
            break;
        }

    }

    if(!found){
        printf("Can not find.");
    }
    return 0;
}
