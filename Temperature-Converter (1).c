#include <stdio.h>
int main()
{
    float OriginalTemp, ConvertedTemp;
    char selection, converted;
    printf("[f]- Fahrenheit\n[c]-Celsius\n[k]-Kelvin\n");
    printf("Input orignal temperature value: ");
    scanf("\n%f", &OriginalTemp);
    printf("Select orignal temperature scale: ");
    scanf("\n%c", &selection);
    printf("Select converted temperature scale: ");
    scanf("\n%c", &converted);
    if (selection == 'f' || selection == 'F')
    {
        if (converted == 'c' || converted == 'C')
        {
            ConvertedTemp = (OriginalTemp - 32) * 5 / 9;
        }
        else if (converted == 'k' || converted == 'K')
        {
            ConvertedTemp = (OriginalTemp - 32) * 5 / 9 + 273.15;
        }
        else if (converted == 'f' || converted == 'f')
        {
            ConvertedTemp = OriginalTemp;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else if (selection == 'c' || selection == 'C')
    {
        if (converted == 'c' || converted == 'C')
        {
            ConvertedTemp = OriginalTemp;
        }
        else if (converted == 'k' || converted == 'K')
        {
            ConvertedTemp = OriginalTemp + 273.15;
        }
        else if (converted == 'f' || converted == 'f')
        {
            ConvertedTemp = (OriginalTemp * 9 / 5) + 32;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else if (selection == 'k' || selection == 'K')
    {
        if (converted == 'c' || converted == 'C')
        {
            ConvertedTemp = OriginalTemp - 273.15;
        }
        else if (converted == 'k' || converted == 'K')
        {
            ConvertedTemp = OriginalTemp;
        }
        else if (converted == 'f' || converted == 'f')
        {
            ConvertedTemp = (OriginalTemp - 273.15) * 9 / 5 + 32;
        }
        else
        {
            printf("%c is not a valid input!", converted);
            return -1;
        }
    }
    else
    {
        printf("%c is not a valid input!", converted);
        return -1;
    }
    printf("%.2f %c = %.2f %c", OriginalTemp, selection, ConvertedTemp, converted);
    return 0;
}
