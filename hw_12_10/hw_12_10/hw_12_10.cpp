#include <iostream>
using namespace std;


/// <summary>
/// увеличивает статическую переменную а и выводит её значение до 5
/// </summary>
void increase() {
	static int a = 0;
	a++;

	std::cout << a << "\n";
	if (a < 5)
	{
		increase();
	}
}


/// <summary>
/// уменьшает статическую переменную b и выводит её значение до 1
/// </summary>
void decreasing() {
	static int b = 6;
	b--;
	std::cout << b << "\n";

	if (b != 1)
	{
		decreasing();
	}
}


/// <summary>
/// проверяет, является ли заданое число степеью двойки и выводит "YES"или"NO" 
/// </summary>
/// <param name="user_number"> проверяет число </param>
void degree(int user_number)
{
	if (user_number > 0 && (user_number & (user_number - 1)) == 0)
	{
		std::cout << "YES\n";
	}
	else
	{
		std::cout << "NO\n";
	}
}


/// <summary>
/// вычисляет суму цифр в заданном числе и возвращает результат
/// </summary>
/// <param name="number"> число, сумму цифр которого нужно найти </param>
/// <returns></returns>
int sum(int number) {
	int temp = 0;
	while (number > 0)
	{
		temp += number % 10;
		number = number / 10;
	}
	return temp;
}


/// <summary>
/// выводит цифры числа в обратно порядке 
/// </summary>
/// <param name="n"> число, цифры которого нужно вывести </param>
void back(int n)
{
	if (n > 0)
	{
		std::cout << n % 10 << " ";
		back(n / 10);
	}
}
/// <summary>
/// выводит цифры числа в обычном порядке
/// </summary>
/// <param name="f"> число, цифры которого нужно вывести </param>
void front(int f)
{
	if (f >= 10)
	{
		front(f / 10);
		std::cout << " ";
	}
	std::cout << f % 10;
}

/// <summary>
/// переворачисвает заданное число и возвращает результат
/// </summary>
/// <param name="f"> число, которое нужно перевернуть </param>
/// <param name="reverse_num"> текущее перевёрнутое число </param>
/// <returns> перевёрнутое число </returns>
int reverse(int f, int reverse_num)
{
	if (f == 0)
	{
		return reverse_num;
	}
	else
	{
		int last_digit = f % 10;
		int new_reverse_num = reverse_num * 10 + last_digit;

		return reverse(f / 10, new_reverse_num);
	}
}


int reverse(int f)
{
	return reverse(f, 0);
}

/// <summary>
/// возвращает а в степень b
/// </summary>
/// <param name="a"> основание степени </param>
/// <param name="b"> показатель степени </param>
/// <returns> возврощает степень числа </returns>
int degree_second(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	else if (b == 1)
	{
		return a;
	}
	else
	{
		return degree_second(a, b - 1) * a;
	}
}

/// <summary>
/// вычисляте сумму чисел от e до n включительно и возрощает результат 
/// </summary>
/// <param name="n"> начало диапозона </param>
/// <param name="e"> конец диапозона </param>
/// <returns> возврощает сумму чисел в диапозоне </returns>
int sum_second(int n, int e)
{
	if (e == n)
	{
		return n;
	}
	else
	{
		return sum_second(n, e - 1) + e;
	}
}

int main()
{
	cout << "#1:\n";
	increase();
	cout << "\n";

	cout << "#2:\n";
	decreasing();
	cout << "\n";

	cout << "#3:\n";
	int user_number;
	cout << "Input number: ";
	cin >> user_number;
	degree(user_number);
	cout << "\n";

	cout << "#4:\n";
	int number;
	cout << "Input number: ";
	cin >> number;
	cout << sum(number) << "\n";
	cout << "\n";

	cout << "#5:\n";
	int n;
	cout << "Input number: ";
	cin >> n;
	back(n);
	cout << "\n";

	cout << "#6:\n";
	int f;
	cout << "Input number: ";
	cin >> f;
	front(f);
	cout << "\n";

	cout << "#7:\n";
	cout << "reverse: " << reverse(2341) << "\n\n";

	cout << "#8:\n";
	cout << "degree: " << degree_second(5, 3) << "\n\n";

	cout << "#9:\n";
	cout << "sum: " << sum_second(1, 15) << "\n\n";

	return 0;
}
