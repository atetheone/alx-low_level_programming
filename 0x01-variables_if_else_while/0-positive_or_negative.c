#include <stidio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int n = rand();

	if (n < 0)
		printf("is negative");
	else if (n > 0)
		printf("is positive");
	else
		printf("is zero");

	return 0;
}
