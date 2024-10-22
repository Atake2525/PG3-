#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>



typedef void (*PFunc)(int*);

// コールバック関数
void DispResult(int* result) {
	if (*result % 2 == 0) {
		printf("グウスウ\n", *result);
	} else {
		printf("キスウ\n", *result);
	}
}

void setTimeout(PFunc p, int second) {
	// コールバック関数を呼び出す
	Sleep(second * 1000);
	p(&second);
}

int main() {
	int dice;
	int s;

	printf("サイコロをフります\n");

	// サイコロを振る（1〜6のランダムな数値を生成）
	srand((unsigned int)time(NULL));
	dice = rand() % 6 + 1;
	dice = dice % 2;

	// ユーザーに1か2で入力させる
	printf("サイコロのデメがハンかチョウかをニュウリョクしてください\n");
	printf("1がハン, 2がチョウ: ");
	scanf_s("%d", &s);

	// 3秒後に結果を表示
	setTimeout(DispResult, 3);

	// 回答を判定
	if ((dice == 1 && s == 2) || (dice == 2 && s == 1)) {
		printf("セイカイ\n");
	} else {
		printf("フセイカイ\n");
	}

	return 0;
}