#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <iostream>

using namespace std;

class Expression
{
public:
    Expression(){}
    virtual ~Expression(){}
    virtual float calcul() = 0;
    virtual void affichageClassique() = 0;
    virtual void affichagePolonaiseInversee() = 0;
	string GetFromFile(string filepath) 
	{
		string equation;
		ifstream fileStream;
		fileStream.open(filepath);
		if (fileStream.is_open()) 
		{
			getline(fileStream, equation);
			return equation;
		}
		else 
		{
			cout << "Le fichier est introuvable" << endl;
			return "";
		}
	}
	void SaveToFile(string toSave) 
	{
		ofstream savefile ("./save");
		savefile << toSave;
		savefile.close();
		return;
	}
};

#endif // EXPRESSION_H
