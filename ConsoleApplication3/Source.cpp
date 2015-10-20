#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void main() 
{
	int main_mass[100], sub_mass[10], m = 0;
	srand(time(NULL));
	for (int counter = 0;counter <= sizeof(main_mass);counter++) 
	{
		main_mass[i] = rand();
		//cout << main_mass[i]<<endl;
	}
	for (int sub_counter = 0; sub_counter <= 9; sub_counter++)  // заполнение sub_mass
	{
		sub_mass[sub_counter] = main_mass[sub_counter + m];

		

	}
	
}

void sort(int* arrayPtr, int length_array) // сортировка выбором
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // временная переменная для хранения значения перестановки
		for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++)
		{
			if (arrayPtr[repeat_counter] > arrayPtr[element_counter])
			{
				temp = arrayPtr[repeat_counter];
				arrayPtr[repeat_counter] = arrayPtr[element_counter];
				arrayPtr[element_counter] = temp;
			}
		}
	}
}