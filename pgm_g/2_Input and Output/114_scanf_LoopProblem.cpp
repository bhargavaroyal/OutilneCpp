// C program to demonstrate the problem when
// scanf() is used in a loop
#include<stdio.h>
  
int main()
{
    char c;
    printf("......Enter q to quit......\n");
    do
    {
        printf("Enter a character\n");
        scanf("%c", &c);
        printf("%c\n", c);
    }
    while (c != 'q');
    return 0;
}
