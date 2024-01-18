#pragma once
#include <string>
using namespace std;

/*######################Class Entreprise#######################*/

class Entreprise
{
private:
	string nom;

};

/*######################Class Employes#######################*/

class Employes
{
protected:
	string nom, prenom;
	int age;
	float salaire;
public:
	void getCar();
	Employes(string _nom, string _prenom, int _age);
};

/*######################Class Commerciaux#######################*/

class Commerciaux: public Employes
{
protected:
	float salaireBase=50;
public:
	Commerciaux(string _nom, string _prenom, int _age);
};

/*######################Class Vendeurs#######################*/

class Vendeurs : public Commerciaux
{
protected:
	float primes;
public:
	Vendeurs(string _nom, string _prenom, int _age, float _primes);
	void calculS();

};

/*######################Class Representants#######################*/

class Representants : public Commerciaux
{
protected:
	float primes, fraisD;
public:
	Representants(string _nom, string _prenom, int _age, float _primes, float _fraisD);
	void calculS();

};

/*######################Class Techniciens#######################*/

class Techniciens: public Employes
{
protected:
	float salaireBase=40;
public:
	Techniciens(string _nom, string _prenom, int _age);
	void calculS();
};

/*######################Class Interimaires#######################*/

class Interimaires: public Employes
{
private:
	float tauxHoraire;
public:
	Interimaires(string _nom, string _prenom, int _age, float _tauxHoraire);
	void calculS();
};
