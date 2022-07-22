#include <stdio.h>
int main()
{
    int i = 1, temp, sum = 0, count = 0;
    float mean;
    while (1)
    {
        printf("[%d] Input Number: ", i);
        scanf("%d", &temp);
        if (temp < 0)
        {
            continue;
        }
        else if (temp == 0)
        {
            break;
        }
        else
        {
            count++;
            sum += temp;
            i++;
        }
    }
    mean = sum / count;
    printf("Average = %.2f.", mean);
    return 0;
}
