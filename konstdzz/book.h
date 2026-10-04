#pragma once
class Book
{
private:
    char* author;
    char* title;
    char* publisher;

    int year;
    int quantity;
    int pages;

public:
    Book();
    explicit Book(const char* title);

    Book(
        const char* author,
        const char* title,
        const char* publisher,
        int year,
        int quantity,
        int pages
    );

    Book(const Book& other);

    ~Book();

    Book& operator=(const Book& other);

    void setAuthor(const char* author);
    void setTitle(const char* title);
    void setPublisher(const char* publisher);
    void setYear(int year);
    void setQuantity(int quantity);
    void setPages(int pages);

    const char* getAuthor() const;
    const char* getTitle() const;
    const char* getPublisher() const;
    int getYear() const;
    int getQuantity() const;
    int getPages() const;

    void print() const;
};
