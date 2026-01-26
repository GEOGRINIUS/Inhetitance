#pragma warning (disable:4326)
#include<iostream>
#include<fstream>	//0) подключение файловые потокий

using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	//1) Создаем поток:
	std::ofstream fout;
	//2) Открываем поток:
	fout.open("file.txt");
	//3) Записываем поток:
	fout << "Hello world!" << endl;
	//4) Закрываем поток:
	fout.close();
}