#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  SnakeWaterGun(char you,char comp)
{
// return 1 if you win, return -1 if you lose and return 0 if it is draw.
    if(you == comp)
    {
        return 0;
    }
    if(you =='S' && comp == 'W')
    {
        return 1;
    }
    else if(you =='W' && comp == 'S')
    {
        return -1;
    }
    
    if(you =='G' && comp =='S')
    {
        return 1;
    }
    else if(you =='S' && comp =='G')
    {
        return -1;
    }
    if (you =='G' && comp =='W')
    {
        return -1;
    }
    else if (you =='W' && comp =='G')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char you,comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    if(number<33)
    {
        comp='S';
    }
    else if(number>33 && number<66)
    {
        comp='W';
    }
    else
    {
        comp='G';
    }
    printf("Enter S for Snake, W for water and G for Gun\n");
    scanf("%c",&you);
    int result = SnakeWaterGun(you,comp);
    if(result==0)
    {
        printf("Game Draw\n");
    }
    else if(result==1)
    {
        printf("You win!!\n");
    }
    else
    {
        printf("You lose!!\n");
    }

    return 0;
}