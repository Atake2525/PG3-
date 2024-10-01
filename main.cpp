#include <stdio.h>
#include <Windows.h>

int main() { 
	SetConsoleOutputCP(65001);

	char str[] = "あアァ亜a";
	printf("%s\n", str);
	//printf("あ");

	return 0;
}