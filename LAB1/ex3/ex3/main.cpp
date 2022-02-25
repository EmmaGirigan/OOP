#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main() {
	char phrase[1024];
	scanf("%[^\n]s", phrase);
	char* p;
	p = strtok(phrase, " ");
	char* words[100]; int k = 0;
	while (p != nullptr) {
		//printf("%s\n", p);
		words[k++] = p;
		p = strtok(NULL, " ");
	}
	int i, j;
	for (i = 0; i < k; i++) {
		//printf("%s\n", words[i]);
		for (j = 0; j < k; j++) {
			if (strlen(words[i]) > strlen(words[j])) {
				char* aux = words[i];
				words[i] = words[j];
				words[j] = aux;
			}
			else if (strlen(words[i]) == strlen(words[j])) {
				if (strcmp(words[i], words[j]) < 0) {
					char* auxx = words[i];
					words[i] = words[j];
					words[j] = auxx;
				}
			}
		}
	}
	for (i = 0; i < k; i++) {
		printf("%s\n", words[i]);
	}
}