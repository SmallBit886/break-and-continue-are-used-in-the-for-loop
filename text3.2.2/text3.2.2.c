#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	if (i == 5)
	//		break;
	//	printf("%d ", i);	//1 2 3 4
	//}
 


	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d ", i);//1 2 3 4     6 7 8 9 10
	//}



	////代码1
	//for (;;)
	//{
	//	printf("hehe\n");//死循环
	//}


	//int i = 0;
	//int j = 0;
	////这里打印多少个hehe?
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		printf("hehe\n");//100个hehe
	//	}
	//}

	//int i = 0;
	//int j = 0;
	////如果省略掉初始化部分，这里打印多少个hehe?
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//	{
	//		printf("hehe\n");//10个hehe
	//	}
	//}
	// 
	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	//{
	//	printf("hehe\n");	//2个hehe
	//}
	// 一道笔试题：
	////请问循环要循环多少次？
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	//循环0次
	return 0;
}
