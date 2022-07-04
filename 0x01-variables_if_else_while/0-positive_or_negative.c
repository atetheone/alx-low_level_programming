#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int n = rand();

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return 0;
}
