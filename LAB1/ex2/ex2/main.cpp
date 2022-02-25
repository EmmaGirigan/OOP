#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* file;
	file = fopen("in.txt", "r");
	if (file == NULL) {
		perror("Unable to open file");
		exit(1);
	}
	
	char line[128];
	int sum = 0;
	while (fgets(line, sizeof(line), file) != NULL) {
		sum += atoi(line);
	}
	printf("%d", sum);
	fclose(file);
}