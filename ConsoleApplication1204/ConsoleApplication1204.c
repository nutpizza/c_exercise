#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 100000

int main()
{
#pragma region FileWrite

	/*
	FILE* fp = fopen("temp.txt", "w");

	fputs("Hello, World\n", fp);

	fclose(fp);
	
	*/

#pragma endregion

#pragma region FileRead

	FILE* fp = fopen("temp.txt", "r");
	char buffer[MAX_SIZE] = {0, };

	fread(buffer, 1, MAX_SIZE, fp);
	printf("%s", buffer);

	fclose(fp);

#pragma endregion

	return 0;
}