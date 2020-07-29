// �������� 4.�Ǽ������� ����Ǿ� �ִ� ���� double A[]���� ��հ�, �ִ밪, ��ü�� ���� ����Ͽ�
//������ �μ��� ���� ��ȯ�ϴ� �Լ��� �ۼ��϶�.

#include <iostream>
using namespace std;
void getSumDiff(double A[], double* average, double* max, double* sum, int size);

int main() {
	const int size = 5;

	double A[size] = {2,3,4,5,6};
	double average;
	double max;
	double sum;

	getSumDiff(A, &average, &max, &sum, size);

	printf("%f\n",average);
	printf("%f\n",max);
	printf("%f\n",sum);
}

void getSumDiff(double A[], double* average, double* max, double* sum, int size) {

	//��
	for (int i = 0; i < size; i++) {
		*sum += A[i];
		*max = *max < A[i] ? A[i] : *max;
	}

	*average = *sum / size;
}
