//アンドロイドの伏�b垢��
//Android 垢皆
#include <iostream>
int main() {
	// 徭蛍の誼吭な冱�Zで
	// Let's チャレンジ�。�
	char * S = new char[100];
	std::cin >> S;
	for (auto i = 0; *(S + i * 2) != '\0'; ++i) {
		std::cout << *(S + i * 2);
	}
	
	return 0;
}