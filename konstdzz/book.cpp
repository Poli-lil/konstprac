#include "book.h"
#include <iostream>
#include <cstring>

using namespace std;

Book::Book()
{
    author = new char[1];
    author[0] = '\0';

    title = new char[1];
    title[0] = '\0';

    publisher = new char[1];
    publisher[0] = '\0';

    year = 0;
    quantity = 0;
    pages = 0;
}

Book::Book(const char* title)
{
    author = new char[1];
    author[0] = '\0';

    publisher = new char[1];
    publisher[0] = '\0';

    if (title != nullptr)
    {
        this->title = new char[strlen(title) + 1];

        strcpy_s(
            this->title,
            strlen(title) + 1,
            title
        );
    }
    else
    {
        this->title = new char[1];
        this->title[0] = '\0';
    }

    year = 0;
    quantity = 0;
    pages = 0;
}

Book::Book(
    const char* author,
    const char* title,
    const char* publisher,
    int year,
    int quantity,
    int pages)
{
    if (author != nullptr)
    {
        this->author = new char[strlen(author) + 1];

        strcpy_s(
            this->author,
            strlen(author) + 1,
            author
        );
    }
    else
    {
        this->author = new char[1];
        this->author[0] = '\0';
    }

    if (title != nullptr)
    {
        this->title = new char[strlen(title) + 1];

        strcpy_s(
            this->title,
            strlen(title) + 1,
            title
        );
    }
    else
    {
        this->title = new char[1];
        this->title[0] = '\0';
    }

    if (publisher != nullptr)
    {
        this->publisher = new char[strlen(publisher) + 1];

        strcpy_s(
            this->publisher,
            strlen(publisher) + 1,
            publisher
        );
    }
    else
    {
        this->publisher = new char[1];
        this->publisher[0] = '\0';
    }

    this->year = year;
    this->quantity = quantity;
    this->pages = pages;
}

Book::Book(const Book& other)
{
    author = new char[strlen(other.author) + 1];

    strcpy_s(
        author,
        strlen(other.author) + 1,
        other.author
    );

    title = new char[strlen(other.title) + 1];

    strcpy_s(
        title,
        strlen(other.title) + 1,
        other.title
    );

    publisher = new char[strlen(other.publisher) + 1];

    strcpy_s(
        publisher,
        strlen(other.publisher) + 1,
        other.publisher
    );

    year = other.year;
    quantity = other.quantity;
    pages = other.pages;
}

Book::~Book()
{
    delete[] author;
    delete[] title;
    delete[] publisher;
}

Book& Book::operator=(const Book& other)
{
    if (this != &other)
    {
        delete[] author;
        delete[] title;
        delete[] publisher;

        author = new char[strlen(other.author) + 1];

        strcpy_s(
            author,
            strlen(other.author) + 1,
            other.author
        );

        title = new char[strlen(other.title) + 1];

        strcpy_s(
            title,
            strlen(other.title) + 1,
            other.title
        );

        publisher = new char[strlen(other.publisher) + 1];

        strcpy_s(
            publisher,
            strlen(other.publisher) + 1,
            other.publisher
        );

        year = other.year;
        quantity = other.quantity;
        pages = other.pages;
    }

    return *this;
}

void Book::setAuthor(const char* author)
{
    delete[] this->author;

    this->author = new char[strlen(author) + 1];

    strcpy_s(
        this->author,
        strlen(author) + 1,
        author
    );
}

void Book::setTitle(const char* title)
{
    delete[] this->title;

    this->title = new char[strlen(title) + 1];

    strcpy_s(
        this->title,
        strlen(title) + 1,
        title
    );
}

void Book::setPublisher(const char* publisher)
{
    delete[] this->publisher;

    this->publisher = new char[strlen(publisher) + 1];

    strcpy_s(
        this->publisher,
        strlen(publisher) + 1,
        publisher
    );
}

void Book::setYear(int year)
{
    this->year = year;
}

void Book::setQuantity(int quantity)
{
    this->quantity = quantity;
}

void Book::setPages(int pages)
{
    this->pages = pages;
}

const char* Book::getAuthor() const
{
    return author;
}

const char* Book::getTitle() const
{
    return title;
}

const char* Book::getPublisher() const
{
    return publisher;
}

int Book::getYear() const
{
    return year;
}

int Book::getQuantity() const
{
    return quantity;
}

int Book::getPages() const
{
    return pages;
}

void Book::print() const
{
    cout << "Автор: " << author << '\n';
    cout << "Назва: " << title << '\n';
    cout << "Видавництво: " << publisher << '\n';
    cout << "Рік: " << year << '\n';
    cout << "Кількість: " << quantity << '\n';
    cout << "Сторінок: " << pages << '\n';
}