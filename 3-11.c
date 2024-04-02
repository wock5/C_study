# include <stdio.h>

void main()
{ 
	float a = 0.1234567890123456789012345f;
	double b = 0.12345678901234567890123456;

	printf("%30.25f \n", a);
	printf("%30.25lf \n" ,b);
}
