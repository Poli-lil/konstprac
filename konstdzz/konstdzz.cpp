#include <iostream>
#include <Windows.h>
#include "book.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Book books[5] =
    {
        Book(
            "Тарас Шевченко",
            "Кобзар",
            "Освіта",
            2018,
            1000,
            320
        ),

        Book(
            "Леся Українка",
            "Лісова пісня",
            "Освіта",
            2020,
            500,
            180
        ),

        Book(
            "Тарас Шевченко",
            "Гайдамаки",
            "Фоліо",
            2022,
            700,
            250
        ),

        Book(
            "Іван Франко",
            "Захар Беркут",
            "Фоліо",
            2019,
            600,
            220
        ),

    };

    char author[100];

    cout << "Введіть автора: ";
    cin.getline(author, 100);

    cout << '\n';
    cout << "Книги автора " << author << ":" << '\n';

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(
            books[i].getAuthor(),
            author) == 0)
        {
            books[i].print();
        }
    }

 
    char publisher[100];

    cout << '\n';
    cout << "Введіть видавництво: ";
    cin.getline(publisher, 100);

    cout << '\n';
    cout << "Книги видавництва "
        << publisher << ":" << '\n';

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(
            books[i].getPublisher(),
            publisher) == 0)
        {
            books[i].print();
        }
    }


    int year;

    cout << '\n';
    cout << "Введіть рік: ";
    cin >> year;

    cout << '\n';
    cout << "Книги, випущені після "
        << year << " року:" << '\n';

    for (int i = 0; i < 5; i++)
    {
        if (books[i].getYear() > year)
        {
            books[i].print();
        }
    }

}