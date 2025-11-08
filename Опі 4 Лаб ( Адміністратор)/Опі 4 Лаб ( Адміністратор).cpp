#include <iostream>
#include <string>

using namespace std;

// Функція виведення фінального звіту на консоль (Виводу)
void printReport(string reportData)
{
	cout << "\n=========================================" << endl;
	cout << "              ANIMAL REPORT" << endl;
	cout << "===========================================" << endl;
	cout << reportData << endl;
	cout << "===========================================" << endl;
}

// Функція генерування звіту на основі запиту. (Обробки)
string generateReport(string reportType)
{
	string generatedData;

	if (reportType == "Mammals" || reportType == "mammals")
	{
		generatedData = "Type: Mammals\n";
		generatedData += " - Lions: 5 (Healthy)\n";
		generatedData += " - Tigers: 3 (1 under review)\n";
		generatedData += " - Elephants: 2 (Healthy)\n";
	}
	else if (reportType == "Birds" || reportType == "birds")
	{
		generatedData = "Type: Birds\n";
		generatedData += " - Macaw Parrots: 12 (Healthy)\n";
		generatedData += " - Eagles: 4 (Healthy)\n";
	}
	else
	{
		generatedData = "Error: Report for type '" + reportType + "'not found.";
	}
	return generatedData;
}

// Функція для отримання вхідних даних від адміністратора. (Вводу)
string getUserInput()
{
	string type;
	cout << "Enter animal type for the report (e.g. 'Mammals' or 'Birds'): ";

	getline(cin, type);

	return type;
}

// Основна програма
int main()
{
	// Ввід
	string reportType = getUserInput();

	// Обробка
	string reportData = generateReport(reportType);

	// Вивід
	printReport(reportData);

	return 0;
}