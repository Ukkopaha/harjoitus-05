/*
Harjoitus 5
Paulus Linna
IIA14SB
Teht‰v‰kuvaus:
Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.

Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.

Muussa tapauksessa ohjelma tulostaa tekstin BONGO.

P‰iv‰m‰‰r‰: 18.9.2014
Versio: 1.0
*/

#include <iostream>
using namespace std;

int luku1;
int luku2;

void main()
{
	cout << "Anna kaksi lukua: ";
	cin >> luku1;
	cin >> luku2;

	if (luku1 == luku2)
		cout << "BINGO!";

	if (luku1 !=luku2)
		cout << "BONGO!";
}
