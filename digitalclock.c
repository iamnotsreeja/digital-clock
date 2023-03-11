#include <stdio.h>
#include <time.h> //for sleep() function

int main()
{
    int hour=0, minute=0, second=0;
    while(1) //any non zero number can be used to create this infinite loop
    {
        printf("%d : %d : %d ",hour,minute,second);
        printf("\n");
        second++;

        if(second==60)
        {
            minute+=1;
            second=0;
        }

        if(minute==60)
        {
            hour+=1;
            minute=0;
        }

        if(hour==24)
        {
            hour=0;
            minute=0;
            second=0;
        }

        sleep(1);   //sleep() allows the program to pause its execution for specified number of time
    }

    return (0);
}