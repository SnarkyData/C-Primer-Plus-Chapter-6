// sweetie.c -- a counting loop

#include <stdio.h>

int main() {

	const int NUMBER = 22;
	int count = 1;				// initialization

	while (count <= NUMBER) {		// test

		printf("Be my Valentine!\n"); 	// action
		count++;			// update count
	}

	return 0;
}
