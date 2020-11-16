// 6.1
#include <iostream> 
#include <iomanip> 
#include <time.h>
using namespace std;


int UnitTest(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        S += a[i];
    return S;
}


void Create(int* a, const int size, const int Low, const int High)   //����������� �����
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

/*
void Create(int* a, const int size, const int Low, const int High, int i)  // ����������� �����
{
    a[i] = Low + rand() % (High-Low+1);
    if (i<size-1)
        Create(a, size, Low, High, i+1);
}*/

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;     //����������� ���Ѳ� 
    cout << endl;
}
/*
void Print(int* a, const int size, int i)                // ����������� �����
{
    cout << setw(4) << a[i];
    if (i<size-1)
        Print(a, size, i+1);
    else
        cout << endl;

}*/

int Sum1(int* a, const int size)             //����������� ���Ѳ� ���������� ����
{
    int S = 0;
    for (int i = 0; i < size; i++)
        S += a[i];
    return S;
}

int Sum2(int* a, const int size, int i, int S) {         //����������� ���Ѳ� ���������� ����
    S += a[i];
    if (i < size - 1)
        return Sum2(a, size, i + 1, S);
    else
        return S;
}

int Change_array_1(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 15 && a[i] != 9)
            a[i] = 0;

    }
}

int Change_array_2(int* a, int size)
{
    if (a[size - 1] != 15 && ((size - 1) != 9))
    {

        a[size - 1] = 0;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    const int s = 23;

    int a[s];
    int Low = 4;
    int High = 16;
    Create(a, s, Low, High);
    Print(a, s);

    cout << "�-��� ��� �������� ������ :" << s << endl;
    cout << "���� ��� �������� ������ �� ��������� : " << Sum1(a, s) << endl;

    cout << "���� ��� �������� ������ �� ������� : " << Sum2(a, s, 0, 0) << endl; //��²� ��� ������������ ������� ���������� ����


    //Change_array(a,s);

    cout << " ��̲�� ������ �� ������� (4;16) ���������. ����� - ����� ��� �������� ��� �������� ������� �����" << endl;
    cout << Change_array_1(a, s) << endl;
    Print(a, s);

    cout << "��̲�� ������ �� �������" << endl;
    cout << Change_array_2(a, s) << endl;
    Print(a, s);

}