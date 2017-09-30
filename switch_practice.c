#include<stdio.h>

int main()
{
	char score;
	scanf("%c",&score);
	switch(score){
		case 'A':
		printf("90分以上\n");
		break;
		case 'B':
		printf("80到90分\n");
		break; 
		case 'C':
		printf("70到80分\n");
		break;
		case 'D':
		printf("60到70分\n");
		break; 
		case 'E':
		printf("60分以下\n");
		break; 
		default:
        printf("输入错误\n");
	} 
	return 0;
}
