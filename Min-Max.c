#include <stdio.h>
int main(){
    int min = 1,max = 1;
    for (int i = 1; i <= 10; i++)
    {
        int num;
        printf("[%d] Input Number: ",i);
        scanf("%d",&num);
        if(num > 0){
            if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
        } else {
            printf("This is an invalid input. Try Again.\n");
            --i;
            continue;
        }

    }
    printf("Min: %d",min);
    printf("\nMax: %d",max);
    return 0;
}
