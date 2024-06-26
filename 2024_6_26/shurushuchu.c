#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	printf("welcome %d岁的%s", 20,"yuanshengyang");
//	return 0;
//}

//int main()
//{
//	printf("%.2f\n",123.45);//%后加.是显示多少位
//	printf("%12.4f\n", 321.56);
//	return 0;
//}

int main()
{
	int score = 0;
	printf("请输入数字：");
	scanf("%d", &score);
	printf("您的成绩：%d", score);

}