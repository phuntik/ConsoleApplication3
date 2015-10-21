#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void main() 
{
	int main_array[100], temp_array[10], sub_array[10], m = 0;
	srand(time(NULL));
	for (int input_counter = 0;input_counter <= sizeof(main_array);input_counter++) 
	{
		main_array[input_counter] = rand();
		//cout << main_array[input_counter]<<endl;
	}
	//cout << endl;
	for (int sub_counter = 0; sub_counter <= 9; sub_counter++) //заполнение sub_array
	{
		for (int temp_counter = 0; temp_counter <= 9; temp_counter++)  // заполнение temp_array
		{
			temp_array[temp_counter] = main_array[temp_counter + m];
		}
		sort(temp_array, sizeof(temp_array));
		sub_array[sub_counter] = temp_array[0];
	}
	sort(sub_array, sizeof(temp_array));
	for (int output_counter = 0;output_counter <= sizeof(sub_array);output_counter++) //вывод результата финальной сортировки
	{
		cout << sub_array[output_counter]<<"\n";
	}
	
	
}

void sort(int* sort_array, int array_size) // сортировка выбором
{
	for (int sort_counter = 0; sort_counter < array_size; sort_counter++)
	{
		int temp = sort_array[0]; // временная переменная для хранения значения перестановки
		for (int sub_sort_counter = sort_counter + 1; sub_sort_counter < array_size; sub_sort_counter++)
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