#pragma warning (disable:4326)
#include<iostream>
#include<fstream>	//0) подключение файловые потокий
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WRITE_TO_FILE

void main()
{
	setlocale(LC_ALL, "");

#ifdef WRITE_TO_FILE

	std::ofstream fout;
	fout.open("file.txt", std::ios_base::app);
	fout << "Hello world!" << endl;
	fout.close();

	system("notepad file.txt");	//Функция system() позволяет выполнить любую команду из командной строки Windows (cmd.exe)
#endif // WRITE_TO_FILE

	cout << "Your name please: ";
	const int SIZE = 256;
	char last_name[SIZE] = {};
	char first_name[SIZE] = {};
	cin >> first_name >> last_name;
	cout << first_name << "\t" << last_name << endl;

}