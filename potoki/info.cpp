#include <iostream>
#include <fstream>
#include "directori.h"
using namespace std;

int main() {
	Directory obj("Planet", "Artem", "0969248080", "Odessa", "C++");
	//obj.Input();
	//obj.Save();
	//obj.Print();

	Directory obj2("Track", "Villa", "3023930549", "Kallina", "C#");
	//obj2.Input();
	//obj2.Save();
	obj2.Print();

}