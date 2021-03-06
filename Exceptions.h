#pragma once

#include <iostream>
#include <string>

using namespace std;

class EmailInvalido {
	string email;
public:
	EmailInvalido(string nome);
	void emailInvalido();
};

class EstudanteInvalido {
	string nome;
public:
	EstudanteInvalido(string nome);
	void usernameInvalido();
};

class DocenteInvalido {
	string sigla;
public:
	DocenteInvalido(string sigla);
	void siglaInvalida();
};

class PasswordInvalida {
	unsigned long password;
public:
	PasswordInvalida(unsigned long password);
	void passwordInvalida();
};