...// 전과 동일
void swapObjects(Car &r1, Car &r2)
{
	Car tmp;
	tmp = r1;
	r1 = r2;
	r2 = tmp;
	r1.display();
	r2.display();
}

int main()
{
	Car mine(0, 1, "white");
	Car yours(0, 1, "red");
	swapObjects(mine, yours);
	mine.display();
	yours.display();

	return 0;
}		
