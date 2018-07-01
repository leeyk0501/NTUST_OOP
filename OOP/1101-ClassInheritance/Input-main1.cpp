// Name: �����Z
// Date: 20180522
// Last Update: 20180522
// Problem statement: C++ Homework "1101- ClassInheritance"
#include "document.h"
#include "email.h"
#include "file.h"
// Intent: �M������r
// Pre: const Document& docObject, string keyword
// Post: �M��O�_�]�t����r
bool ContainsKeyword(const Document& docObject, string keyword)
{
	if (docObject.getText().find(keyword) != string::npos)
		return true;
	return false;
}
// ======================
//     main function
// ======================
int main()
{
	// Create several test objects
	Email email1("Body about programming in C++",
		"Larry", "Curly", "Programming");
	Email email2("Body about running marathons",
		"Speedy", "Gonzales", "races");

	File file1("Contents about some C++ file", "file.txt");
	File file2("Contents about marathon races", "run.txt");

	cout << "Which contains C++?" << endl;
	if (ContainsKeyword(email1, "C++")) cout << " Email1" << endl;
	if (ContainsKeyword(email2, "C++")) cout << " Email2" << endl;
	if (ContainsKeyword(file1, "C++")) cout << " File1" << endl;
	if (ContainsKeyword(file2, "C++")) cout << " File2" << endl;

	// Test our assignment operator
	file2 = file1;
	file2.setPathname("c:");
	cout << "After assignment file2=file1 and file2.setPathname(\"c:\"): "
		<< endl;
	cout << "File1's path = " << file1.getPathname() << endl;
	cout << "File2's path = " << file2.getPathname() << endl;
	system("pause");
	return 0;
}
