#include <stdio.h>

void erase(char* str, int num) {
	while (str[num] != NULL) {
		str[num] = str[num + 1];
		num = num + 1;
	}
}

void alphabet(char* str, char* alpha) {
	int alphanum = 0;
	int num = 0;

	while (str[num] != NULL) {
		if (str[num] >= 97 && str[num] <= 122) {
			alpha[alphanum] = str[num];
			alphanum = alphanum + 1;
		}
		num = num + 1;
	}

	while (alpha[alphanum] != NULL) {
		alpha[alphanum] = NULL;
		if (alphanum == 9)
			break;
		alphanum = alphanum + 1;
	}

	printf("%s\n", alpha);
}

void number(char* str, char* numb) {
	int numnum = 0;
	int num = 0;

	while (str[num] != NULL) {
		if (str[num] >= 48 && str[num] <= 57) {
			numb[numnum] = str[num];
			numnum = numnum + 1;
		}
		num = num + 1;
	}

	while (numb[numnum] != NULL) {
		numb[numnum] = NULL;
		if (numnum == 9)
			break;
		numnum = numnum + 1;
	}
	printf("%s\n", numb);
}

void main() {
	char string[20] = "abc-567-efg-555";
	char alpha[10];
	char numb[10];
	int search = 0;

	while (string[search] != NULL) {
		if (string[search] == '-')
			erase(string, search);
		search = search + 1;
	}

	printf("%s\n", string);
	alphabet(string, alpha);
	number(string, numb);
	return 0;
}