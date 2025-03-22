#include <stdio.h>

int main()
{   
    int cash;
	int amount;
	int withdrawal;
	scanf("%d\n",&amount);
	scanf("%d",&withdrawal);
	cash = amount - withdrawal;
	printf("your balance is : %d", cash);
	return 0;
}