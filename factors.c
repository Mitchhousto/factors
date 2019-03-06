#include <stdio.h>
int main() {
	unsigned int count = 1, x;
	//printf("Enter an integer to factorise: ");
	//scanf("%d", &x);
	x = 64;
	
	while(count <= x) {
		if(x % count == 0) { // ie: if the remainder is zero
			printf("%d\n", count);
			fflush(stdout);
		}

		count++;
	}
	printf("Finished\n");
	return 0;
}
