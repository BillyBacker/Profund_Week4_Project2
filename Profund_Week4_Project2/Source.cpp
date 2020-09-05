#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int len(const char In[256]) {
	int count = 0;
	for (count = 0; count < 256; count++) {
		if (In[count] == 0) {
			break;
		}
	}
	return count;
}
int powint(int In, int exp) {
	int Out = 1;
	for (int i = 0; i < exp; i++) {
		Out *= In;
	}
	return Out;
}
int toDec(char In) {
	if (In >= 48 && In <= 57) {
		return In-48;
	}
	else if (In >= 65 && In <= 70) {
		return In - 55;
	}
}
int main() {
	char In[256];
	unsigned long long Out = 0;
	printf("Enter Hexadecimal number : ");
	scanf("%s", &In);
	printf("Decimal number : ");
	for (int i = 0; i < len(In); i++) {
		Out += powint(16, len(In) - i-1) * toDec(In[i]);
	}
	printf("%d", Out);
	return 0;
}