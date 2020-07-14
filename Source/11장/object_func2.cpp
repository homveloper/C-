...// 전과 동일
Car buyCar()		
{
	Car tmp(0, 1, "metal");
	return tmp;
}

int main()
{
	Car c1;
	c1.display();
	c1 = buyCar();
	c1.display();

	return 0;
}		
