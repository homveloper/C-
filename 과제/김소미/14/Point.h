class Point{
	int x;
	int y;

public:
	Point();
	Point(int x, int y);

	void setX(int x){
		this->x = x;
	}
	int getX(){
		return x;
	}
	void setY(int y){
		this->y = y;
	}
	int getY(){
		return y;
	}

    Point& getPoint(){
        return *this;
    }
};

Point::Point(){
	Point(0,0);
}

Point::Point(int x, int y) : x(x), y(y){
}