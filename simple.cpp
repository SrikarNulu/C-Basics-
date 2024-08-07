#include <stdio.h>
int main()
{
	double a,b;
	char oparator;
	printf("enter two numbers and oparator(+,-,*,/)");
	scanf ("%lf %lf %c",&a,&b,&oparator);
	switch (oparator)
	{
		case '+':
			printf("sum=%lf",a+b);
			break;
			case '-':
				printf("sub=%lf",a-b);
				break;
				case '*':
					printf("mul=%lf",a*b);
					break;
					case '/':
						printf("div=%lf",a/b);
						break;
						defaulf:
							printf("enter a valid number");
	}
}
