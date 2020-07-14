#include <iostream>
#include <string>
#include <list>
using namespace std;

class Movie
{
private:
	string title;
	int year;
public:
	Movie(string t="", int y=0) { title = t; year = y; }
	void display() { cout << title << ": " << year << endl; }
	double getYear() { return year; }
};

void print_list(list<Movie>& li)
{
	list<Movie>::iterator it;
	for(it=li.begin(); it!=li.end(); ++it)
		it->display();
	cout << endl;
}

int main()
{
	list<Movie> movies;

	movies.push_back(Movie("gone with the wind", 1939));
	movies.push_back(Movie("terminator", 1984));
	movies.push_back(Movie("titanic", 1998));

	list<Movie> old_movie;
	list<Movie> new_movie;
	list<Movie>::iterator it;
	it=movies.begin();
	while (it != movies.end()){
		if( it->getYear() > 1980 ) 
			new_movie.push_back(*it);
		else 
			old_movie.push_back(*it);
		it = movies.erase(it);
	}
	cout << "고전 영화" << endl;
	print_list(old_movie);
	cout << "최근 영화" << endl;
	print_list(new_movie);

	return 0;
}
