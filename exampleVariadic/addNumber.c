// C program for the above approach

#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
int AddNumbers(int n, ...)
{
	int Sum = 0;
	int temp = 0;

	// Declaring pointer to the
	// argument list
	va_list ptr;

	// Initializing argument to the
	// list pointer
	va_start(ptr, n);

	for (int i = 0; i < n; i++)

		// Accessing current variable
		// and pointing to next one
		temp = va_arg(ptr, int);
		printf("Number : %i\n",temp);
		Sum += temp;

	// Ending argument list traversal
	va_end(ptr);

	// Try to access the Next argument
	// edit by Jirayut
	printf("Number : %i\n",va_arg(ptr, int));
	printf("Number : %i\n",va_arg(ptr, int));

	return Sum;
}

// Driver Code
int main()
{
	printf("\n\n Variadic functions: \n");

	// Variable number of arguments
	printf("\n 1 + 2 + 3 + 4 = %d ",
		AddNumbers(2, 1, 2, 3, 4));

	// printf("\n 3 + 4 + 5 = %d ",
	// 	AddNumbers(3, 3, 4, 5));

	// printf("\n 6 + 7 + 8 + 9 = %d ",
	// 	AddNumbers(4, 6, 7, 8, 9));

	printf("\n");

	return 0;
}
