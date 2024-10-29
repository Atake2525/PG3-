#include "Enemy.h"

// フェーズの関数テーブル
void (Enemy::*Enemy::spMoveTable[])() = {
    &Enemy::Move1, // 接近
	&Enemy::Shoot, // 攻撃
	&Enemy::Move2, // 離脱
};

void Enemy::Update() {
	int s = 1;
	while (true) {
		(this->*spMoveTable[index_])();
		scanf_s("%d", &s);
		if (s == 0) {
			index_++;
			s = 1;
		}
		if (index_ > 2) {
			index_ = 0;
		}
		if (s == 9) {
			break;
		}
	}
}

void Enemy::Move1() { 
	printf("敵が接近\n");
}
void Enemy::Shoot() { 
	printf("敵の攻撃\n");
}
void Enemy::Move2() { 
	printf("敵が離脱\n");
}