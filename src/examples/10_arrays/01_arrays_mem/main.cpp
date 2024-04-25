#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//arrays_and_pointers();
	//const auto SIZE = 3;
	

	int times_table[ROWS][COLS];
	populate_times_table(times_table, ROWS);
	display_times_table(times_table, ROWS);

	

	return 0;

}