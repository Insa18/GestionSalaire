#pragma once
#include <string>
#include <iostream>
using namespace std;


/*######################Class Employes#######################*/

class Employes
{
protected:
	string nom, prenom;
	int age;
	float salaire;
public:
	Employes();
	void getCar();
	Employes(string _nom, string _prenom, int _age);
};

/*######################Class Commerciaux#######################*/

class Commerciaux: public Employes
{
protected:
	float salaireBase=50;
public:
	Commerciaux();
	Commerciaux(string _nom, string _prenom, int _age);
};

/*######################Class Vendeurs#######################*/

class Vendeurs : public Commerciaux
{
protected:
	float primes;
public:
	Vendeurs();
	Vendeurs(string _nom, string _prenom, int _age, float _primes);
	void calculS();

};

/*######################Class Representants#######################*/

class Representants : public Commerciaux
{
protected:
	float primes, fraisD;
public:
	Representants();
	Representants(string _nom, string _prenom, int _age, float _primes, float _fraisD);
	void calculS();

};

/*######################Class Techniciens#######################*/

class Techniciens: public Employes
{
protected:
	float salaireBase=40;
public:
	Techniciens();
	Techniciens(string _nom, string _prenom, int _age);
	void calculS();
};

/*######################Class Interimaires#######################*/

class Interimaires: public Employes
{
private:
	float tauxHoraire;
public:
	Interimaires();
	Interimaires(string _nom, string _prenom, int _age, float _tauxHoraire);
	void calculS();
};

/*######################Class Entreprise#######################*/

class Entreprise
{
private:
	string nom;
public:
	Vendeurs vendeur[5];
	Representants representant[2];
	Techniciens technicien[3];
	Interimaires interimaires[5];
	Entreprise(string _nom);

};