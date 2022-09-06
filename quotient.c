#include <stdio.h>
int main()
{
	int number1; //initialize numerator
	int number2; //initialize denominator
	
	//prompts for numerator
	printf("Please enter number.\n");
	scanf("%d ", &number1);
	
	//prompts for denominator
	printf("Please enter another number.\n");
	scanf("%d", &number2);
	
	//initializes and calculates quotient and remainder
	int quotient=number1/number2;
	int remainder=number1%number2;
	
	//displays quotient and remainder
	printf("%d divided by %d equals %d with a remainder of %d\n",number1,number2,quotient,remainder);

}