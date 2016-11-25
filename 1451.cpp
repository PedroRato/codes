#include <bits/stdc++.h>

#define QUEBRA_LINHA '\n'
#define END ']'
#define HOME '['

int main() {
    char entrada;
    std::string linha;   std::string::iterator it;

    bool home = false;
    while (scanf("%c", &entrada) != EOF) {
        if (entrada == HOME) {
            home = true;
            it = linha.begin();
        }
        else if (entrada == END){
            home = false;
            it = linha.end();
        }
        else if (entrada != QUEBRA_LINHA){
            if (home){
				/*  The function insert for string/vector, leave the pointer
				 *	where it is, but the function insert for list,
				 *	change the pointer position according with your modifications.
				 *	Thus, you need to force the position for the pointer, otherwise,
				 *	it will write the word back. To this, see below:
				*/
                it = linha.insert(it, entrada);
                it++;
            }
            else
                linha.push_back(entrada);
        }
        else {
            printf("%s", linha.c_str());
            if (!linha.empty()) printf("\n");

            linha.clear();
            home = false;
        }
    }
    return 0;
}
