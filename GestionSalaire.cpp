#include <iostream>
#include "Entreprise.h"
using namespace std;

int main()
{
	Entreprise entreprise1("Promo SN-IR");
	entreprise1.vendeur[0] = Vendeurs ("add", "Paul", 40, 10);
	entreprise1.vendeur[1] = Vendeurs ("afad", "Pierre", 30, 5);
	entreprise1.vendeur[2] = Vendeurs ("aaefaefead", "Jaques", 35, 1);
	entreprise1.representant[0] = Representants ("aafaf", "Giselle", 50, 3, 10);
	entreprise1.representant[1] = Representants ("vvaf", "Georges", 20, 2, 8);
	entreprise1.technicien[0] = Techniciens ("hbih", "Robert", 60);
	entreprise1.technicien[1] = Techniciens ("zdz", "Raymond", 28);
	entreprise1.interilaires[0] = Interimaires ("befay", "Jean-Claude", 55, 75);
	entreprise1.interilaires[1] = Interimaires ("mio", "Jean-Paul", 58, 50);
	entreprise1.interilaires[2] = Interimaires ("imiomiay", "Jean-Marie", 35, 50);
	entreprise1.interilaires[3] = Interimaires ("fs", "Jean-Jean", 18, 0);

}
