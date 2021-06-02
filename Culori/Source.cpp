#include <windows.h>
#include<iostream>
void changeColor(int desiredColor) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor);
}
int main()
{
	for (int i = 0; i <= 256; i++)
	{
		changeColor(i);
		std::cout << i << " ";
		if (i % 10 == 0)
			std::cout << std::endl;
	}
	system("pause");
	return 0;
}