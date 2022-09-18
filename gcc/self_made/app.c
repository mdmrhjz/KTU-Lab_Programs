#include <stdio.h>
#include <conio.h>   // getch
#include <stdlib.h>  // random
#include <Windows.h> // sleep

int main()
{
    char name[50];
    int rnd;
    float final;
    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);

    printf("\n\n\tPlease enter your name: ");
    scanf("%s", name);

    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);

    printf("\n\n\tHi %s!, I'm gonna perform a magic for you...", name);
    sleep(4);
    printf("\n Let's begin");
    sleep(1);

    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);
    printf("\n\n - Please think of a number, remember this number.");
    sleep(1);
    printf("\n Press any key to continue...");
    getch();

    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);
    printf("\n\n - Multiply your number by 2.");
    sleep(1);
    printf("\n Press any key to continue...");
    getch();

    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);
    srand(time(NULL));
    rnd=rand()%30+1;
    printf("\n\n - Add '%d' to your resulting value.", rnd);
    sleep(1);
    printf("\n Press any key to continue...");
    getch();

    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);
    printf("\n\n - Divide it by 2.");
    sleep(1);
    printf("\n Press any key to continue...");
    getch();

    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);
    printf("\n\n - Now subtract the 1st number you thought of from the resulting number.");
    sleep(1);
    printf("\n Press any key to continue...");
    getch();

    system("CLS");
    printf("\n\n\t\t\t--- MAGIC ---");
    sleep(1);
    printf("\n\n - Please wait!");
    sleep(1);
    final=(float)rnd/2;
    printf("\n - Finding your number...");
    sleep(2);
    printf("\n\t -> Your final answer is : %g !", final);
    printf("\n\n  Press any key to exit...");
    getch();
}