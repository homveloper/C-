class Car {
private:       
    // 멤버 변수 선언
    int speed;		//속도
    int gear;	//기어
    string color;	//색상
    ...   
public:
    // 접근자 선언
    int getSpeed() {
        return speed;
    }
    // 변경자 선언
    void setSpeed(int s) {	
        speed = s;
    }
    // 접근자 선언
    public int getGear() {
        return gear;
    }
    // 변경자 선언
    public void setGear(int g) {	
        gear = g;
    }
    // 접근자 선언
    public string getColor() {
        return color;
    }
    // 변경자 선언
    public void setColor(string c) {	
        color = c;
    }
}
