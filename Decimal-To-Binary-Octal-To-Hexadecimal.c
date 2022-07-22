#include <stdio.h>
void DECtoOCT(int num){
    int i = 0;
    int oct[150];
    while (num)
    {
        oct[i] = num%8;
        num/=8;
        i++;
    }
    printf("\nOctal: ");
    while (i--)
    {
        printf("%d",oct[i]);
    }

}
void DECtoBIN(int num){
    int i = 0;
    int bin[150];
    while (num)
    {
        bin[i] = num%2;
        num/=2;
        i++;
    }
    printf("Binary: ");
    while (i--)
    {
        printf("%d",bin[i]);
    }
}
void DECtoHEX(int num){
    char hextable[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int i = 0;
    int hex[120];
    while (num)
    {
        hex[i] = hextable[num%16];
        num/=16;
        i++;
    }
    printf("\nHexadecimal: ");
    while (i--)
    {
        printf("%c",hex[i]);
    }
}
int main(){
    int DEC;
    printf("Enter Decimal Integer: ");
    scanf("%d",&DEC);
    DECtoBIN(DEC);
    DECtoOCT(DEC);
    DECtoHEX(DEC);
    return 0;
}
