#include <stdio.h>

void main()
{
	int a;
	
	printf("1 ~ 4 �߿� �����ϼ��� : ");
	scanf("%d", &a);

	switch (a)
	{
		case 1 :
			printf ("1�� �����ߴ�\n");
			break;
		case 2 :
			printf ("2�� �����ߴ�\n");
			break;
		case 3 :
			printf ("3�� �����ߴ�\n");
			break;
		case 4 :
			printf ("4�� �����ߴ�\n");
			break;
		default :
			printf ("�̻��Ѱ� �����ߴ�.\n");
	}
}
