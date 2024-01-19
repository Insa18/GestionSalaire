#include "Entreprise.h"
#include <iostream>
using namespace std;

Techniciens::Techniciens(string _nom, string _prenom, int _age):Employes(_nom, _prenom, _age)
{

}

void Techniciens::calculS()
{
	salaire = salaireBase;
}

Interimaires::Interimaires(string _nom, string _prenom, int _age, float _tauxHoraire) :Employes(_nom, _prenom, _age)
{
	tauxHoraire = _tauxHoraire;
}

void Interimaires::calculS()
{
	salaire = 0.5*tauxHoraire;
}



void Employes::getCar()
{
	cout << "Nom : " << nom << endl;
	cout << "Prenom : " << prenom << endl;
	cout << "Age : " << age << endl;
	cout << "Salaire : " << salaire << endl;
	cout << endl;
}

Employes::Employes(string _nom, string _prenom, int _age)
{
	nom = _nom;
	prenom = _prenom;
	age = _age;
}

Commerciaux::Commerciaux(string _nom, string _prenom, int _age): Employes(_nom, _prenom, _age)
{
	
}

Vendeurs::Vendeurs(string _nom, string _prenom, int _age, float _primes): Commerciaux(_nom, _prenom, _age)
{
	primes = _primes;
}

void Vendeurs::calculS()
{
	salaire = 50 + (2 * primes);
}

Representants::Representants(string _nom, string _prenom, int _age, float _primes, float _fraisD): Commerciaux(_nom, _prenom, _age)
{
	primes = _primes;
	fraisD = _fraisD;
}

void Representants::calculS()
{
	salaire = 50 + (5 * primes) + (1 * fraisD);
}

Entreprise::Entreprise(string _nom)
{
	nom = _nom;
}
