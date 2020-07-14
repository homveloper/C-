#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie
{
private:
	string title;
	double rating;
public:
	Movie(string t="", double r=0.0) { title = t; rating = r; }
	void print_movie() { cout << title << ": " << rating << endl; }
};

int main()
{
	vector<Movie> movies;

	Movie m("titinic", 9.9);
	movies.push_back(m);
	movies.push_back(Movie("gone with the wind", 9.6));
	movies.push_back(Movie("terminator", 9.7));

	vector<Movie>::iterator it;	// 벡터를 순회하기 위해여 반복자를 선언한다.
	for (it = movies.begin(); it != movies.end(); ++it)
		it->print_movie();

	return 0;
}
