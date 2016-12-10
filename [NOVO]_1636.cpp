#include<vector>
#include<cstdio>
int aux;
void print (int n) {
	std::vector<int> vet {3, 1, 2};
	aux = 0;

	for (int i = 4; i <= n; i++) {
		if (i % 2 == 0) {
			aux = vet.back();
			vet.back() = i;
			vet.push_back (aux);
		}

		else {
			aux = vet.front();
			vet.front() = i;
			vet.push_back (aux);
		}
	}

	printf ("%i", vet.front() );

	for (int it = 1 ; it < vet.size(); ++it)  printf (" %i", vet[it]);

	printf ("\n");
	vet.clear();
}
int main () {
	int n;

	while (scanf ("%i", &n) && n != 0) print (n);

	return 0;
}
