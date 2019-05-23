#include <iostream>
#include "PoliticianTypes.h"

void speak(Politician& poli)
{
	poli.speak();
}

void speak(Politician * pPoli)
{
	pPoli->speak();
}

int main()
{
	Politician ordinaryP;
	GoodPolitician goodP;
	GreatPolitician greatP;

	cout << endl;

	ordinaryP.speak();
	goodP.speak();
	greatP.speak();

	cout << endl;

	speak(ordinaryP);
	speak(goodP);
	speak(greatP);

	cout << endl;

	speak(&ordinaryP);
	speak(&goodP);
	speak(&greatP);
}

