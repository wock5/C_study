#include <stdio.h>

void main()
{
	int a, b;
	char AA;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &AA, &b);

	switch (AA)
	{
		case '+' :
			printf("%d + %d = %d �Դϴ� \n", a, b, a + b);
			break;
		case '-' :
			printf("%d - %d = %d �Դϴ� \n", a, b, a - b);
			break;
		case '*' :
			printf("%d * %d = %d �Դϴ� \n", a, b, a * b);
			break;
		case '/' :
			if (b != 0)
				printf("%d / %d = %d �Դϴ� \n", a, b, a / b);
			else
				printf("0���� �ٸ� ���ڷ� �غ�����!\n");
			break;
			
		case '%' :
			if (b != 0)
				printf("%d %% %d = %d �Դϴ� \n", a, b, a % b);
			else
				printf("0���� �ٸ����ڷ� �غ�����!\n");
			break;
		default:
			printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}
