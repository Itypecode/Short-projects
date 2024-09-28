#include <stdio.h>
    int main()
        {
            int maxval = 50;
            int counter = 11;
            int value[maxval];
            int group[11] = {0,0,0,0,0,0,0,0,0,0,0};
            int high,low,i;
            printf("Enter the values:");
            /* read &  grouping part */
            for(i=0;i<maxval;i++)
                {
                        scanf("%d",&value[i]);
                        ++group[(int)(value[i]/10)];
                }
            /* Heading of the table */
            printf("\nGROUP       RANGE       FREQUENCY");
            /* Calculating range and printing it*/
            for(i=0;i<counter;i++)
                {
                        low = i*10;
                        if(i==10)
                        {   
                            high = low;
                        }
                        else
                        {
                            high = low + 9;
                        }
                        printf("\n%d       %d to %d        %d",i+1,low,high,group[i]);
                }
            return 0;
        }