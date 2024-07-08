/* 
Library catalogue exercise. 
Should contain - Title, Author, Publisher, Subject, ISBN, OCLC, Dewey Decimal, Year Acquired, Year Published, Quantity in stock

*/
#include <format>
#include <iostream>

using std::format;
using std::cout;

struct catalog_card {
	const char* title{};
	const char* author{};
	const char* publisher{};
	const char* subject{};
	const char* isbn{};
	const char* oclc{};
	short int ddc1{};
	short int ddc2{};
	short int year_pub{};
	short int year_acq{};
	short int quantity{};
};
int main() {
	catalog_card lc1{
		"The CGI Book", "William", "New Riders", "CGI", "1122323", "6151516", 510, 78, 1996, 1997, 2
	};

	cout << format("Title: {}\n", lc1.title);
	cout << format("Author: {}\n", lc1.author);
	cout << format("Punlisher: {}\n", lc1.publisher);
	cout << format("Subject: {}\n", lc1.subject);
	cout << format("ISBN: {}\n", lc1.isbn);
	cout << format("OCLC: {}\n", lc1.oclc);
	cout << format("Dewey Decimal: {}\n", lc1.ddc1, lc1.ddc2);
	cout << format("Year published: {}\n", lc1.year_pub);
	cout << format("Year Acquired: {}\n", lc1.year_acq);
	cout << format("Quantity: {}\n", lc1.quantity);
}
