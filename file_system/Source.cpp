#include <iostream>
#include <fstream>//file system biblio. include classes ofstream, ifstream, fstream
#include <string>
using namespace std;

bool statistic(string str) {
	ofstream out;
	out.open("stat.txt", ios::app);
	if (out.is_open()) {
		out << str <<" "<< str.length() << "\n";
		out.close();
		return true;
	}
	out.close();
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");

	//string path = "file.txt";
	//ofstream out;
	//out.open(path, ios::app);

	//if (out.is_open()) {
	//	cout << "���� ������ ��� ������\n";
	//	string input;
	//	for (int i = 0; i < 5; i++){	
	//		cout << "������� ������:\n";
	//		getline(cin, input);
	//		cout << input << "\n";
	//	}
	//}
	//else
	//	cout << "������ �������� �����\n";
	//out.close();
	//cout << endl;
	//ifstream in;
	//in.open(path);
	//if (in.is_open()) {
	//	cout << "���� ������ ��� ������\n";
	//	string str;
	//	//���������� �� ����� �����������
	//	char sym;
	//	while (in.get(sym))
	//		str += sym;
	//	cout << str;
	//	string tmp;
	//	while (!in.eof())
	//		in >> tmp;
	//		cout << tmp << endl;
	//		str += tmp + "\n";
	//}
	//else
	//	cout << "������ �������� �����\n";
	//in.close();
	//if (remove("file.txt"))
	//	cout << "������ ������� �����\n";
	//else
	//	cout << "���� ������\n";


	//task 1
	cout << "Task 1.\nEnter a word\n";
	string word;
	cin >> word;
	cin.ignore();
	if (statistic(word))
		cout << "����� ��������\n";
	else
		cout << "������ ������\n";
	cin >> word;
	if (statistic(word))
		cout << "����� ��������\n";
	else
		cout << "������ ������\n";
	cin.ignore();

	return 0;
}