#include <stdio.h>
void printArray(int array[],int size){
    int i;
    printf("Sorted list: ");
    for(i = 0;i<size;i++){
        if(i==size-1){
            printf("%d",array[i]);
        }
        else{
        printf("%d, ",array[i]);
        }
    }
    printf("\n");
}
void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Sort(int *array,int size){
    int i = 0;
    while (i<size-1)
    {
        if(array[i] < array[i+1]){
            swap(&array[i],&array[i+1]);
        }
        i++;
        Sort(array,size-1);
    }
}
int main(){
    int numbers[10];
    for (int i = 1; i <= 10; i++)
    {
        int temp;
        printf("[%d] Input Number: ",i);
        scanf("%d",&temp);
        if(temp <= 0){
            printf("This is an invalid input. Try Again.\n");
            --i;
            continue;
        }
        numbers[i-1] = temp;
    }
    Sort(numbers,10);
    printArray(numbers,10);
    return 0;
}
