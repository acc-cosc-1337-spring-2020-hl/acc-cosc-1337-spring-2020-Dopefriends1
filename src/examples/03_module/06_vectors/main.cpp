#include "vec.h"

int main() 
{
	//9, 20, 99, 5, 67
	vector<int> nums{ 9, 20, 99, 5, 67 };

	loop_vector_w_index(nums);
	loop_vector_w_index_ref(nums);

	return 0;
}