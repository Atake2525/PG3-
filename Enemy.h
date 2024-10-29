#include <stdio.h>
#pragma once

class Enemy {
public:
	// 自作メンバ関数
	void Move1();
	void Shoot();
	void Move2();

	void Update();

private:
	int index_;
	// メンバ関数ポインタ
	static void (Enemy::*spMoveTable[])();

};
