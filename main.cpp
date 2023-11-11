#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian"); //%=
	int n;

	//task1
	const int row = 10;
	const int col = 10;
	int array[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			array[i][j] = rand() % 100;
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n\n";
	}
	std::cout << "\n\n"; 

	//task2
	for (int i = 0; i < row; i++)
	{
		int sum = 0;
		for (int j = 0; j < col; j++)
		{
			sum += array[i][j];
		}
		std::cout << "сумма ряда " << i + 1 << " = " << sum << '\n';
	}
	std::cout << "\n\n";

	//task3
	std::cout << "Введите число от 0 до 9 -> ";
	std::cin >> n;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (n == i)
			{
				std::sort(array[n], array[n] + col);
			}
		}
	}

		std::cout << "Отсортированный массив:\n{ ";

			for (int j = 0; j < col; j++)
				std::cout << array[n][j] << ", ";
			std::cout << "\b\b }\n";





	return 0;
}
