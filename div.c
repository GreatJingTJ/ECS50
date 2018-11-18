#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	int quotient = 0, remainder = 0;
	int count = 31;
	int dividend = atoi(argv[1]);
	int divisor = atoi(argv[2]);

	//printf("%d / %d = ", dividend, divisor);

	int t;
	int cout = 0;
	/*for(int i = count; i >=0; i--)
	{
		remainder <<= 1;
		remainder |= ((dividend >> i) & 1);
		
		if(remainder >= divisor)
		{	
			remainder -= divisor;
			quotient |= 1 << i;
		} 
	}*/
	t = dividend - divisor;
	
	while(t >= 0)
	{
		cout++;
		dividend = t;
		printf("dividend = t dividend = %d\n", dividend);
		dividend <<= 1;
		divisor <<= 1;
		t = dividend - divisor;
		printf("dividend <<= 1 dividend = %d\n", dividend);
		printf("divisor <<= 1 divisor= %d\n", divisor);
	}
	printf("cout = %d\n", cout);
	dividend >>= cout;

	//printf("%u R %u\n", cout , dividend);
	
	return 0;
}
