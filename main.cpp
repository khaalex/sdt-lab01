#include <iostream>

using namespace std;

int main()
{
    int x, y, sum, pr, razn, chastn; //объявление

    setlocale(LC_ALL, "Russian"); //руссификация командной строки

    cout<<"Введите два целых числа через пробел "; //Приглашение
    cin >> x>>y; //прочитать два целых числа
    sum = x+y;
    cout <<"Сумма чисел\n"<<sum;

    getchar();
    return 0; //показывает, что программа успешно завершена
}
