class Student {
		....
	Student(Student& s) {
		name = new char[strlen(s.name)+1];
		strcpy(name, s.name);
		number = s.number;
	}
		....
};
