// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#define _CRT_SECURE_NOW_WARNINGS
#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int array[10];
	int size = sizeof(array) / sizeof(array[0]);
	int count;
	for (int i = 0; i < size; i++)
	{
		array[i] = rand();
		printf("%d\n", array[i]);
	}
	printf("+left");
	scanf("%d", &count);
	int temp;
	for (int i = 0; i < count; i++)
	{
		temp = array[0];
		for (int j = 1; j < size; j++)
		{
			array[j - 1] = array[i];
		}
		array[size - 1] = temp;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", array[i]);
	}
	return 0;
}

