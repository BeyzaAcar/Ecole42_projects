#include<stdio.h>
#include<math.h>
int glob_sayac = 0;
int GCD(int sayi1, int sayi2)
{
    int ebob=1, i;
    for(i=2;i<=sayi1;i++)
    {
        if(sayi1%i == 0 && sayi2%i == 0)
        {
            ebob = i;
        }
    }
    return ebob;
}

int LCM(int sayi1, int sayi2)
{
    int ebob=1, i;
    for(i=2;i<=sayi1;i++)
    {
        if(sayi1%i == 0 && sayi2%i == 0)
        {
            ebob = i;
        }
    }
    return ((sayi1*sayi2)/ebob);
}

void write_file(int yazdir)
{
    FILE *fileptr;
    fileptr = fopen("result.txt", "a+");
    fprintf(fileptr, "%d\n", yazdir);
    fclose(fileptr);
    glob_sayac++;
    printf("result is written to the result.txt file\n");
}
int calculate_mean(void)
{
    int sum=0, tut,i;
    FILE *fileptr = fopen("result.txt", "r");
    for(i=glob_sayac;i>0;i--)
    {
        fscanf(fileptr,"%d", &tut);
        printf("\n bunu okudum: %d", tut);
        sum = sum+tut;
    }
    fclose(fileptr);
    return sum/glob_sayac;
}

double SDC(void)
{
    int tut, mean,i,sum=0;
    FILE *fileptr = fopen("result.txt", "r");
    mean = calculate_mean();
    printf("\nmean = %d", mean);
    for(i=glob_sayac;i>0;i--)
    {
        fscanf(fileptr,"%d", &tut);
        sum = sum + (pow((tut-mean), 2))/glob_sayac;
    }
    printf("\nsum = %d", sum);
    fclose(fileptr);
    return sqrt(sum);
}

int main()
{
    int sayi1, sayi2,tip, yazdir;
    double standart_sapma;
    while(1)
    {
        printf("lutfen calculator tipini giriniz...:");
        scanf("%d", &tip);
        printf("lutfen ilk sayiyi giriniz..:");
        scanf("%d", &sayi1);
        printf("lutfen ikinci sayiyi giriniz..:");
        scanf("%d", &sayi2);
        if(tip == 1)
        {
            yazdir = GCD(sayi1, sayi2);
            write_file(yazdir);
        }
        else if(tip == 2)
        {
            yazdir = LCM(sayi1, sayi2);
            write_file(yazdir);
        }
        else if(tip == 3)
        {
           standart_sapma = SDC();
           printf("\nstandart sapma = %lf", standart_sapma);
           return 0;
        }
    }
    return 0;
}
