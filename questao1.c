#include <stdio.h>

int main() {
    int ano;

    scanf("%d", &ano);

    int ocorreuOlimpiadas = 0;
    int ocorreuCopaDoMundo = 0;

    int anosOlimpiadas[] = { 1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020 };
    int numAnosOlimpiadas = sizeof(anosOlimpiadas) / sizeof(anosOlimpiadas[0]);

    int anosCopaDoMundo[] = { 1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018 };
    int numAnosCopaDoMundo = sizeof(anosCopaDoMundo) / sizeof(anosCopaDoMundo[0]);

    for (int i = 0; i < numAnosOlimpiadas; i++) {
        if (ano == anosOlimpiadas[i]) {
            ocorreuOlimpiadas = 1;
            break;
        }
    }

    for (int i = 0; i < numAnosCopaDoMundo; i++) {
        if (ano == anosCopaDoMundo[i]) {
            ocorreuCopaDoMundo = 1;
            break;
        }
    }

    if (ocorreuOlimpiadas && ocorreuCopaDoMundo) {
        printf("Ocorreram Jogos Olímpicos de Verão e a Copa do Mundo de no ano de %d.\n", ano);
    } else if (ocorreuOlimpiadas) {
        printf("Ocorreram Jogos Olímpicos de Verão no ano de %d.\n", ano);
    } else if (ocorreuCopaDoMundo) {
        printf("Ocorreu Copa do Mundo no ano de %d.\n", ano);
    } else {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }

    return 0;
}