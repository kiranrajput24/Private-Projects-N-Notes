#include <iostream>
#include <string.h>
using namespace std;
struct book
{
private:
    int book_id;
    float book_price;
    string book_title;

public:
    void put()
    {
        cout << "Enter Book id,price, title \n";
        cin >> book_id >> book_price >> book_title;
        if (book_price < 0)
            book_price = -book_price;
    }

    void display()
    {
        cout << "book_id : " << book_id << "\nBook price : " << book_price << "\nBook title : " << book_title;
    }
};

int main()
{
    book b1;
    b1.put();
    b1.display();

    return 0;
}