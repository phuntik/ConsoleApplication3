#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void sort(int* sort_array, int array_size) // ?????????? ???????
{
	for (int sort_counter = 0; sort_counter <= array_size; sort_counter++)
	{
		int temp = sort_array[0]; // ????????? ?????????? ??? ???????? ???????? ????????????
		for (int sub_sort_counter = sort_counter + 1; sub_sort_counter <= array_size; sub_sort_counter++)
		{
			if (sort_array[sort_counter] > sort_array[sub_sort_counter])
			{
				temp = sort_array[sort_counter];
				sort_array[sort_counter] = sort_array[sub_sort_counter];
				sort_array[sub_sort_counter] = temp;
			}
		}
	}
}

void main()
{
	int main_array[100], temp_array[10], sub_array[10], m = 0; //переменные для первого задания
	int var_for_ex2 = 0; //переменные для второго задания
	int var_for_ex3 = 0, ex3_temp = 0, ex3_counter = 0;
	srand(time(NULL));
	for (int input_counter = 0;input_counter <= 99;input_counter++) //заполнение главного массива
	{

		main_array[input_counter] = rand();

		var_for_ex2 += main_array[input_counter];
		/* задание 3 */
		if (var_for_ex3 >= 10) ex3_counter++;
		if (main_array[input_counter] == ex3_temp + 1) var_for_ex3 += 1;
		else var_for_ex3 = 0;
		ex3_temp = main_array[input_counter];

		//cout << main_array[input_counter]<<endl;
	}
	//cout << endl;
	for (int sub_counter = 0; sub_counter <= 9; sub_counter++) //заполнение массива минимумов десяток
	{
		for (int temp_counter = 0; temp_counter <= 9; temp_counter++)  // заполнение временного массива для определения минимума десятки
		{
			temp_array[temp_counter] = main_array[temp_counter + m];
		}
		m += 10;
		sort(temp_array, 9);
		sub_array[sub_counter] = temp_array[0];
	}
	sort(sub_array, 9);
	cout << "Ex.1: ";
	for (int output_counter = 0;output_counter <= 9;output_counter++) //вывод минимумов десяток в порядке возрастания
	{
		cout << sub_array[output_counter] << " ";
	}
	cout << endl << "Ex.2: " << var_for_ex2 / 10 << endl;
	cout << "Ex.3: " << ex3_counter << endl;

}
