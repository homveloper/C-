#include <iostream>
using namespace std;

class Book
{
    protected:
        string title;
        int page;
        string author;
    public:

};

class Magazine : private Book
{
    private: 
        string releaseDate;
};