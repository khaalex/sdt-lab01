#include <iostream>

using namespace std;

int main()
{
    int x, y, sum, pr, razn, chastn; //����������

    setlocale(LC_ALL, "Russian"); //������������ ��������� ������

    cout << "������� ��� ����� ����� ����� ������ "; //�����������
    cin >> x >> y; //��������� ��� ����� �����
    sum = x + y;
    cout << "����� �����\n" << sum;

    getchar();
    return 0; //����������, ��� ��������� ������� ���������
}
