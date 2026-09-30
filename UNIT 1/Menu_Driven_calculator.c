#include <stdio.h>
int main()
{
int choice;
int a,b;
printf("1. addition\n");
printf("2. subtraction\n");
printf("3. multiplication\n");
printf("4. division\n");
printf("enter your choice: ");
scanf("%d",&choice);

printf("enter first numbers: ");
scanf("%d", &a);
printf("enter second numbers: ");
scanf("%d",&b);

switch(choice)
{
    case 1:
        printf("result: %d\n", a+b);
        break;
    case 2:
        printf("result: %d\n", a-b);
        break;
    case 3:
        printf("result: %d\n", a*b);
        break;
    case 4:
        printf("result: %d\n", a/b);
        break;
    default:
        printf("invalid choice\n");
}
return 0;
}
