#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{
    

    setlocale(0, "");
    const int N = 10;
    int sum = 0;
    int array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(3) << array[i][j];
        }
        cout << endl;
    }
    cout << endl;

    
    //������� ����
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int day = ltm->tm_mday;
    //����� ����� ��������� � ������ �������, ������ ������� ����� ������� ������� �������� ����� ��������� �� N.
    for (int i = day % N; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum += array[i][j];
        }
    }
    cout << "����� ���������: " << sum <<endl;

}

