#include <stdio.h>

#define N	200000

int main() {
	static char cc[N + 1];
	int n, k, i;

	scanf("%d%d%s", &n, &k, cc);
	for (i = 0; i < n && k > 0; i++) {
		int d = n == 1 || i >= 1 ? 0 : 1;

		if (cc[i] != d + '0') {
			cc[i] = d + '0';
			k--;
		}
	}
	printf("%s\n", cc);
	return 0;
}
