#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(void) {
	printf("Dane autora:Adam Narozniak grupa srody godzina 14:15-16:00\nProjekt do obliczania wartosci liczby Pi metoda orzel-reszka\n");
	int losowania, i, traf = 0, p = 1;
	double a, b, Pi;
	for (losowania = 0; losowania < 10;) {
	printf("Podaj liczbe losowan (nie mniejsza niz 10)\n");
	scanf("%d", &losowania);
	}
	printf("Wyniki:\n");
	srand(time(NULL));/*inicjalizacjia generatora liczb losowych, przy czym time(NULL) jest liczba sekund liczona od 1 stycznia 1970*/
	for (i = 1; i <= losowania; i++) {/*loswanie liczb losowych*/
		a = (double)rand() / RAND_MAX;
		b = (double)rand() / RAND_MAX;
		if ((a * a + b * b) <= 1) {
			traf = traf + 1;/*zliczanie przypadkow spelniajacych wymagania*/
		}
		if (ceil((double)p*losowania / 10) == i && p != 10) {/*drukowanie wynikow co 10% od 10% do 90% wlacznie*/
			Pi = 4 * (double)traf / (0.1*p*losowania);
			printf("%d%%\t liczba loswan:%d\t %lf \n", p * 10, i, Pi);
			p++;
		}
	}
	printf("Liczba Pi po wszystkich losowaniach wynosi %lf", (double)4 * traf / losowania);
	return 0;
}
