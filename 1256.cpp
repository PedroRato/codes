#include <cstdio>
#include <cstdlib>
#include <cstddef>


class Array{
private:
	/* #ifndef STARTER_VALUE
	 * #define STARTER_VALUE -1111	// aleatory value, just for get for the tests cases.
	 * #endif 	// !STARTER_VALUE
	 */
	int cols, rows;
	int **table;

public:
	Array();
	Array(int M, int C){
		this->cols = M;
		this->rows = C;

		table = new int* [M];
        for (int i=0; i<M; i++ ) {
            table[i] = new int[C];

            for (int j=0; j<C; j++ )   table[i][j]=-1111;
        }
	}
	virtual ~Array(){
        for (int i=0; i<cols; i++ )
            delete[] table[i];
		delete[] table;
	}

	void logic(int key){
		int index, i = 0;
		index = getHashCode ( key, cols );
		while (table[index][i] != -1111 ) i++;
		table[index][i] = key;
	}
	inline int getHashCode ( int key, int M ) {
		int table_key;
		table_key = key % M;
		return table_key;
	}
	void show () {
		for (int i=0; i<this->cols; i++){
			printf ( "%d -> ", i );
			for (int j=0; j<this->rows; j++){
				if ( table[i][j] == -1111 ) {
					printf("\\\n");
					break;	//j = this->rows; continue; more faster than this.
				}
				else printf( "%d -> ", table[i][j] );
				if ( j==rows-1 ) {
					printf("\\\n");
				}
			}
		}
	}
};

int main ( int argc, char *argv[] ) {
    int N, M, C, key, aux;
    int i, j;

	class Array * table = nullptr;

    scanf ( "%d", &N );
    while ( N-- ) {
        scanf ( "%d %d", &M, &C );
		table = new Array(M,C);
		aux = C;
        while ( aux-- ) {
            scanf ( "%d", &key );
			table->logic(key);
        }
        table->show();
        if ( N>0 ) printf ( "\n" );
        table->~Array();
    }
    return 0;
}
