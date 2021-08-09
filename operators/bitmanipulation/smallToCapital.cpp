#include <cstdio>
int main()
{
    unsigned
char op1 = 'a'; // "a" letter (i.e. small case)
int mask = 0xDF; // choosing a proper mask
printf("a (AND) mask = A\n");
printf("%c & 0xDF = %c\n", op1, op1 & mask);
return 0;
}