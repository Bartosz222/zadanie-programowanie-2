#include <iostream>
#include <string>
#include <vector>
using namespace std;
class device{
	public:
		string nazwa, ram ,procesor;
};
class telefon: public device{
	public:
		string aparat, pamiec;
};
class laptop:public device{
	public:
		string dysk, karta_graf;
};
class tablica{
	public:
		vector <class telefon> Telefony;
		vector <class laptop> Laptopy;
};
class program:public tablica{
	public:
		
	void Menu();
	void Wybor(int wybor);
	void dodaj();
	void dodajTelefon();
	void dodajLaptop();
	void usun();
	void usunTelefon();
	void usunLaptop();
};
void program::Menu(){
	system("cls");
	int wybor;
	cout<<"1.Dodaj"<<endl;
	cout<<"2.Usun"<<endl;
	cout<<"0.Koniec"<<endl;
	cout<<"Twoj wybor:";
	cin>>wybor;
	Wybor(wybor);
}
void program::Wybor(int wybor){
	switch(wybor){
		case 1:
			dodaj();
			break;
		case 2:
			usun();
			break;
		case 0:
			exit(1);
			break;
		default:
			cout<<"Nie ma takiej opcji!!!"<<endl;
			system("Pause");
			Menu();
			break;
	}
}
void program::dodaj(){
	int wybor;
	system("cls");
	cout<<"1.Telefon"<<endl;
	cout<<"2.Laptop"<<endl;
	cout<<"0.Powrot"<<endl;
	cout<<"Twoj wybor:";
	cin>>wybor;
	switch(wybor){
		case 1:
			dodajTelefon();
			break;
		case 2:
			dodajLaptop();
			break;
		case 0:
			Menu();
			break;
		default:
			cout<<"Nie ma takiej opcji"<<endl;
			system("pause");
			dodaj();
			break;
	}
}
void program::dodajTelefon(){
	class telefon wprowadzany;
	string napis;
	string *wskaznik = &napis;
	cout<<"Podaj Nazwe: ";
	cin>>*wskaznik;
	wprowadzany.nazwa = *wskaznik;
	cout<<"Podaj Ram: ";
	cin>>*wskaznik;
	wprowadzany.ram = *wskaznik;
	cout<<"Podaj Procesor: ";
	cin>>*wskaznik;
	wprowadzany.procesor = *wskaznik;
	cout<<"Podaj Aparat: ";
	cin>>*wskaznik;
	wprowadzany.aparat = *wskaznik;
	cout<<"Podaj Pamiec: ";
	cin>>*wskaznik;
	wprowadzany.pamiec = *wskaznik;
	Telefony.push_back(wprowadzany);
	
	Menu();
}
void program::dodajLaptop(){
	class laptop wprowadzany;
	string napis;
	string *wskaznik = &napis;
	cout<<"Podaj Nazwe: ";
	cin>>*wskaznik;
	wprowadzany.nazwa = *wskaznik;
	cout<<"Podaj Ram: ";
	cin>>*wskaznik;
	wprowadzany.ram = *wskaznik;
	cout<<"Podaj Procesor: ";
	cin>>*wskaznik;
	wprowadzany.procesor = *wskaznik;
	cout<<"Podaj Dysk: ";
	cin>>*wskaznik;
	wprowadzany.dysk = *wskaznik;
	cout<<"Podaj Karta Graficzna: ";
	cin>>*wskaznik;
	wprowadzany.karta_graf = *wskaznik;
	Laptopy.push_back(wprowadzany);

	Menu();
}
void program::usun(){
	system("cls");
	
	int wybor;
	cout<<"1.Telefon"<<endl;
	cout<<"2.Laptop"<<endl;
	cout<<"0.Powrot"<<endl;
	cout<<"Twoj wybor:";
	cin>>wybor;
	switch(wybor){
		case 1:
			usunTelefon();
			break;
		case 2:
			usunLaptop();
			break;
		case 0:
		
			Menu();
			break;
		default:
			cout<<"Nie ma takiej opcji!!"<<endl;
			system("Pause");
		
			Menu();
			break;
	}
	
}
void program::usunTelefon(){
	int liczba = Telefony.size();
	
	int numer;
	if(liczba == 0 ){
		cout<<"Wektor jest pusty"<<endl;
		system("Pause");
		system("cls");
		usun();
	}
	system("cls");
	for(int i=0;i<=liczba-1;i++){
		cout<<"Numer"<<i<<endl;
		cout<<"Nazwa: "<<Telefony[i].nazwa<<endl;
		cout<<"Ram: "<<Telefony[i].ram<<endl;
		cout<<"Procesor: "<<Telefony[i].procesor<<endl;
		cout<<"Aparat: "<<Telefony[i].aparat<<endl;
		cout<<"Pamiec: "<<Telefony[i].pamiec<<endl;
		cout<<"--------------"<<endl;
	}
	cout<<"Podaj numer ktory chcesz usunac: ";
	cin>>numer;
	Telefony.erase(Telefony.begin()+numer);
	system("cls");
	Menu();

}
void program::usunLaptop(){
	int liczba = Laptopy.size();
	
	int numer;
	if(liczba == 0 ){
		cout<<"Wektor jest pusty"<<endl;
		system("Pause");
		system("cls");
		usun();
	}
	system("cls");
	for(int i=0;i<=liczba-1;i++){
		cout<<"Numer"<<i<<endl;
		cout<<"Nazwa: "<<Laptopy[i].nazwa<<endl;
		cout<<"Ram: "<<Laptopy[i].ram<<endl;
		cout<<"Procesor: "<<Laptopy[i].procesor<<endl;
		cout<<"Aparat: "<<Laptopy[i].dysk<<endl;
		cout<<"Pamiec: "<<Laptopy[i].karta_graf<<endl;
		cout<<"--------------"<<endl;
	}
	cout<<"Podaj numer ktory chcesz usunac: ";
	cin>>numer;
	Laptopy.erase(Laptopy.begin()+numer);
	system("cls");
	Menu();

}

int main() {
	program p1;
	p1.Menu();
	return 0;
}
