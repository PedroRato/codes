#include <cstdio>

#define TAM_ADJ 20	// vert ≤ 20

bool visitados[TAM_ADJ];
bool adjacencia[TAM_ADJ][TAM_ADJ];

bool dfs(int vert, int nCasos, int z) {
    int i, s = z;
    bool aux = false;

    visitados[vert] = true;

    for (i = 0; i < nCasos; i++, s=z) {
        if (adjacencia[vert][i] == 1) {
            aux = true;
            if (!visitados[i]) {
                while(s--) printf(" ");	//cout << string(s, ' ');
                printf("%i-%i pathR(G,%i)\n", vert, i, i);
                dfs(i, nCasos, z + 2);
            }
			else {
                while(s--) printf(" ");
                printf("%i-%i\n", vert, i);
            }
        }
    }
    return aux;
}

void limpa(int vert) {
    for (int i = 0; i < vert; i++){
        visitados[i] = 0;
		for (int j = 0; j < vert; j++)
            adjacencia[i][j] = 0;
    }
}

void indent(int vert) {
    int ind = 0;

    while (ind != -1) {
        if (dfs(ind, vert, 2))	printf("\n");

        ind = -1;

        for (int i = 0; i < vert; i++) {
            if (visitados[i]) continue;
			ind = i;
			break;		// eq -> i:=vert
        }
    }
}


int main() {
    int nCasos, vert, edge, linha, coluna, caso = 1;
    scanf("%i", &nCasos);

    while(nCasos--) {
        scanf("%i %i", &vert, &edge);
        limpa(vert);

        while(edge--) {
            scanf("%i %i", &linha, &coluna);
            adjacencia[linha][coluna] = 1;
        }

        printf("Caso %i:\n", caso++);
        indent(vert);
    }

    return 0;
}
