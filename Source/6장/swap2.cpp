void swap(int *px, int *py)
int main()
{
	int a = 100, b = 200;
	cout << "swap() 호출전: a = " << a << ", b = " << b << endl;
	swap(&a, &b);
	cout << "swap() 호출후: a = " << a << ", b = " << b << endl;
	return 0;
}

void swap(int *px, int *py)
{
	int tmp;
	cout << "In swap() : *px = " << *px << ", *py = " << *py << endl;
	tmp = *px; *px = *py; *py = tmp;
	cout << "In swap() : *px = " << *px << ", *py = " << *py << endl;
}
