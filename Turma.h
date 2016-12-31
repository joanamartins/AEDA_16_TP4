#pragma once

#include <vector>
#include "Ucurricular.h"

using namespace std;

class Turma {
	int id;
	int vagasMax;
	vector<pair<string,int>> vagas;
public:
	Turma() { id = idg; vagasMax = 0; idg++; };
	Turma(vector<pair<string, int>> vac) : vagas(vac) { id = idg; idg++; };
	static int idg;
	int getID() { return id; };
	void addUC(string uc, int vac) { vagas.push_back(make_pair(uc, vac)); if (vac > getVac()) vagasMax = vac; };
	int getVac() { return vagasMax; };
	vector<pair<string, int>> getVagas() const { return vagas; };
	void decVac() { for (size_t i = 0; i < vagas.size(); i++) { vagas[i].second--;	vagasMax--; } };
	bool operator<(Turma that) { return this->getVac() < that.getVac(); };
};