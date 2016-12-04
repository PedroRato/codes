#include <bits/stdc++.h>

int cont = -1;

int fib (int c) {
	cont++;
	return (c == 0) ? 0 : (c == 1) ? 1 : (fib (c - 1) + fib (c - 2) );
}


int main() {
	int n, qnt, get;
	scanf ("%i", &qnt);

	while (qnt--) {
		scanf ("%i", &n);
		get = fib (n);
		printf ("fib(%i) = %i", n, cont);
		printf (" calls = %i\n", get);
		cont = -1;
	}

	return 0;
}
