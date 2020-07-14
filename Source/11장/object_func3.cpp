...// 전과 동일
void swapObjects(Car *p1, Car *p2)
{
	Car tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	p1->display();
	p2->display();
}

int main()
{
	Car mine(0, 1, "white");
	Car yours(0, 1, "red");
	swapObjects(&mine, &yours);
	mine.display();
	yours.display();

	return 0;
}		
