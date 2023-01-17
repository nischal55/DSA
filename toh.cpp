#include <stdio.h>
void toh(int n, char src, char temp, char dest)
{
if (n == 1)
{
printf("%c to %c \n", src, dest);
return;
}
toh(n-1, src, dest, temp);
printf("%c to %c\n",src, dest);
toh(n-1, temp, src, dest);
}

int main()
{
int n ; // n immplies the number of discs
printf("Enter the number of disk:- ");
scanf("%d",&n);
toh(n, 'A', 'B', 'C'); // A, B and C are the name of rod
return 0;
}
