#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Directory {
	string name_company;
	string name;
	string phone;
	string place;
	string work;

public:
	Directory() = default;

	Directory(string nc, string n, string ph, string p, string wk) {
		name_company = nc;
		name = n;
		phone = ph;
		place = p;
		work = wk;
	}

	void SearchNameCompany() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.phone >> obj.place >> obj.work;

		string answer;
		cout << "Enter name of company: ";
		cin >> answer;

		if (answer == name_company) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Phone: " << phone << endl;
			cout << "Street: " << place << endl;
			cout << "Cvalification: " << work << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void SearchName() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.phone >> obj.place >> obj.work;

		string answer;
		cout << "Enter name: ";
		cin >> answer;

		if (answer == name) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Phone: " << phone << endl;
			cout << "Street: " << place << endl;
			cout << "Cvalification: " << work << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void SearchNumber() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.phone >> obj.place >> obj.work;

		string answer;
		cout << "Enter number: ";
		cin >> answer;

		if (answer == phone) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Phone: " << phone << endl;
			cout << "Street: " << place << endl;
			cout << "Cvalification: " << work << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void SearchProffesion() {
		Directory obj;
		ifstream take("Directory.txt");
		take >> obj.name_company >> obj.name >> obj.phone >> obj.place >> obj.work;
		string answer;
		cout << "Enter proffesion: ";
		cin >> answer;

		if (answer == work) {
			cout << "\nName of company: " << name_company << endl;
			cout << "Name: " << name << endl;
			cout << "Phone: " << phone << endl;
			cout << "Strear: " << place << endl;
			cout << "Cvalification: " << work << endl << endl;
		}
		else {
			cout << "Didn't find this: " << answer << endl;
		}
	}

	void Input() {
		cout << "Enter name of company: ";
		getline(cin, name_company);
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter phone: ";
		getline(cin, phone);
		cout << "Enter street: ";
		getline(cin, place);
		cout << "Enter Cvalification: ";
		getline(cin, work);
		cout << endl;
	}

	void Save() {
		ofstream save("Directory.txt", ios::app);
		save << name_company << "\n"
			<< name << "\n"
			<< phone << "\n"
			<< place << "\n"
			<< work << "\n";
		save.close();
	}

	void Print() {
		Directory d;
		ifstream add("Directory.txt");
		do {
			getline(add, d.name_company);
			cout << "Name of company: " << d.name_company << "\n";
			getline(add, d.name);
			cout << "Name: " << d.name << "\n";
			getline(add, d.phone);
			cout << "Number: " << d.phone << "\n";
			getline(add, d.place);
			cout << "Street: " << d.place << "\n";
			getline(add, d.work);
			cout << "Cvalification: " << d.work << "\n\n";
		} while (!add.eof());
		add.close();
	}
};