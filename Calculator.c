#include<stdio.h>


int add(int a,int b)
{
    return a+b;
}


int sub(int a,int b)
{
    return a-b;
}


int mul(int a,int b)
{
    return a*b;
}


int divi(int a,int b)
{
    return a/b;
}


int mod(int a,int b)
{
    return a%b;
}



int main()
{
    int choice;
    int a,b,ans;

    while(1)
    {
        printf("Press 1 for +");
        
        printf("\nPress 2 for -");
        
        printf("\nPress 3 for *");
        
        printf("\nPress 4 for /");
        
        printf("\nPress 5 for %%");
        
        printf("\nPress 0 for Exit");


        printf("\n\nEnter choice: ");
        scanf("%d",&choice);


        if(choice==0)
        {
            printf("Exit");
            break;
        }

        printf("Enter first number: ");
        scanf("%d",&a);

        printf("Enter second number: ");
        scanf("%d",&b);


        switch(choice)
        {
            case 1:
                ans = add(a,b);
                printf("Answer = %d",ans);
                break;

            case 2:
                ans = sub(a,b);
                printf("Answer = %d",ans);
                break;

            case 3:
                ans = mul(a,b);
                printf("Answer = %d",ans);
                break;

            case 4:
                ans = divi(a,b);
                printf("Answer = %d",ans);
                break;

            case 5:
                ans = mod(a,b);
                printf("Answer = %d",ans);
                break;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}