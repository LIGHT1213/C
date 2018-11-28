
#include<stdio.h>
int main(void)
{
    int choice,i;
   
    for(i=1;i<=5;i++)
    {
        printf("[1]apples \n");
        printf("[2]pears \n");
        printf("[3]oranges \n");
        printf("[4]grapes \n");
        printf("[0]exit \n");
         printf("Enter choice: ");
        scanf("%d",&choice);
    
        if(choice==0) break;
     
        switch(choice)
        {
            case 1: printf("[1]apple price=3.0\n\n");       
                   break;
           case 2: printf("[2]pears price=2.5\n\n");
                   break;
           case 3: printf("[3]oranges price=4.1\n\n");
                    break;
           case 4:    printf("[4]grapes price=10.2\n\n");
                   break;            　　　　　　　
        }
    }
    return 0;
  }
