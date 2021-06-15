#include <stdio.h>
#include <string.h>

struct books
{
	char title[50];
	char author[20];
	char subject[50];
	int book_id;
};

int main()
{
	struct books book_1;
	
	strcpy_s(book_1.title,50, "C primer");
	strcpy_s(book_1.author, 50,"andrew");
	strcpy_s(book_1.subject,50 ,"Computer Science");
	book_1.book_id = 11000;

	struct books *p;
	p = &book_1;
	printf("title is :%s\n", p->title);
	printf("author is :%s\n", p->author);

	return 0;

}