#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int Guess;
int Total;

class Question
{
private:
	string Question_Text;
	string Answer1;
	string Answer2;
	string Answer3;

	int CorrectAnswer;
	int QuestionScore;

public:
	void setValues(string, string, string, string, int, int);
	void askQuestion();
};

void Question::setValues (string intrebarea, string raspuns1, string raspuns2, string raspuns3, int corect, int punct)
	{
	Question_Text=intrebarea;
	Answer1=raspuns1;
	Answer2=raspuns2;
	Answer3=raspuns3;
	CorrectAnswer=corect;
	QuestionScore=punct;
	}

void Question::askQuestion()
	{
		cout<<endl;
		cout<<Question_Text<<endl;
		cout<<"1. "<<Answer1<<endl;
		cout<<"2. "<<Answer2<<endl;
		cout<<"3. "<<Answer3<<endl;
		cout<<endl<<"Raspunsul tau este: ";
		cin>>Guess;
		if (Guess==CorrectAnswer)
		{
			cout<<endl<<"Raspuns corect."<<endl;
			Total=Total+QuestionScore;
		}
		else
		{
			cout<<endl;
			cout<<"Raspuns incorect. Raspunsul corect este "<<CorrectAnswer<<"."<<endl;
		}
	}

int main()
{
	cout<<"Test la management"<<endl;
	
	string Nume, Prenume, Specializare;
	int An;
	cout<<"Numele: ";
	cin>>Nume;
	cout<<"Prenumele: ";
	cin>>Prenume;
	cout<<"Specializarea(de forma IE/AF/CIG etc.): ";
	cin>>Specializare;
	cout<<"Anul de studiu (de forma 1/2/3): ";
	cin>>An;
	cout<<endl;

	Question intrebarea1;
	Question intrebarea2;
	Question intrebarea3;
	Question intrebarea4;
	Question intrebarea5;
	Question intrebarea6;
	Question intrebarea7;
	Question intrebarea8;
	Question intrebarea9;
	Question intrebarea10;

	intrebarea1.setValues("Competentele managerului sunt urmatoarele: ", 
		"juridica, de imagine, de constiinta", 
		"de a decide, de a aloca resurse, de a influenta comportamentul", 
		"ambele variante sunt corecte", 
		1,
		1);

	intrebarea2.setValues("La ce se refera conceptul de organizatie care invata?", 
		"o organizatie in care o mare parte a angajatilor sunt studenti", 
		"o organizatie care obtine rezultate bune in crearea, dobandirea si transferul de cunostinte, precum si in modificarea comportamentului pentru a reflecta noile cunostinte",
		"o scoala",
		2,
		1);

	intrebarea3.setValues("Cine sunt reprezentantii managementului stiintific?", 
		"Max Weber si Abraham Maslow ", 
		"F. W. Taylor si Henry Gantt", 
		"Herbert Simon, Alvin Toffler si Peter F. Drucker", 
		2,
		1);

	intrebarea4.setValues("Care dintre următoarele nu este element al culturii organizationale?", 
		"limbajul", 
		"valorile", 
		"capitalul social", 
		3,
		1);

	intrebarea5.setValues("Cate functiuni ale firmei exista?", 
		"5", 
		"3", 
		"6", 
		1,
		1);

	intrebarea6.setValues("Dintre cele sase palarii (six hats) propuse de Edward de Bono, cea verde se referă la: ", 
		"gandire obiectiva, neutra, bazata pe cifre, fapte etc.", 
		"gandire sintetica, exprima controlul, mixeaza utilizarea celorlalte cinci palarii", 
		"gandire creativa si generarea de noi idei", 
		3,
		1);

	intrebarea7.setValues("Distinctia dintre bine si rau si actiunea ce deriva in raport cu ceea ce este conform (fundamentat pe un cod social) este esenta: ", 
		"eticii", 
		"moralei", 
		"legii", 
		2,
		1);

	intrebarea8.setValues("Obiectivele organizationale pot fi clasificate astfel: ", 
		"tangibile si intangibile", 
		"masurabile si mai greu de cuantificat", 
		"ambele variante sunt corecte", 
		3,
		1);

	intrebarea9.setValues("Cercetarea este un element al domeniului: ", 
		"tehnic", 
		"economic", 
		"social", 
		1,
		1);

	intrebarea9.setValues("Componenta cuantificabila a motivatiei salariatilor este reprezentata de: ", 
		"sansele de afirmare", 
		"salariul", 
		"conditiile de munca", 
		2,
		1);

	intrebarea1.askQuestion();
	intrebarea2.askQuestion();
	intrebarea3.askQuestion();
	intrebarea4.askQuestion();
	intrebarea5.askQuestion();
	intrebarea6.askQuestion();
	intrebarea7.askQuestion();
	intrebarea8.askQuestion();
	intrebarea9.askQuestion();
	intrebarea9.askQuestion();

	cout<<"ai raspuns corect la "<<Total-1<<" intrebari si ai nota "<<Total<<endl;
	cout<<endl;
	if (Total>=5)
		cout<<"Felicitari! Ai trecut!";
	else
		cout<<"Nu ai promovat! Mai mult noroc data viitoare!";
	_getch();
	return 0;
}
	



