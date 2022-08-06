// A simple C program to demonstrate the traffic light
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void red()
{
    printf("\033[0;31m");
}
void yellow()
{
    printf("\033[0;33m");
}
void green()
{
    printf("\033[0;32m");
}
int main(void)
{
    int n1 = 1,n2 = 2,n3 = 3;
    int color;
    

red();

printf("_____________________\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("| RED Light [STOP!] |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|___________________|\n");

 yellow();

printf("_____________________\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|YELLOW Light [SLOW]|\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|___________________|\n");

 green();

    printf("_____________________\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("| Green Light [Go]  |\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("|___________________|\n");


printf("\n\033[1;37m Traffic Light....\n\n");
    printf("(*) 1 for 'Red'\n");
    printf("(*) 2 for 'Yellow'\n");    
    printf("(*) 3 for 'Green'\n\n");
    printf("[+] Enter Your choice:[=>] ");
    scanf("%d",&color);
    printf("\n\n");

    if (color == n1)
    {
        red();
printf("_____________________\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("| RED Light [STOP!] |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|___________________|\n");

    }
    else if(color == n2)
    {
        yellow();
printf("_____________________\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|YELLOW Light [SLOW]|\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|                   |\n");
printf("|___________________|\n");

    }

    else if(color == n3)
    {
        green();
    printf("_____________________\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("| Green Light [Go]  |\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("|                   |\n");
    printf("|___________________|\n");
    
    printf("*** Have a great day and safe drive. ***\n");
    }
    else
    {
            printf("\033[0;34m");
        printf("[X] Error! something is Wrong!!...\n");
    }
    
    return 0;
}