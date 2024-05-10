#include <iostream>
using namespace std;


class Coffee
{
private:
    bool CoffeeGrinder()
    {
        return false;
    }
public:
    void Start()
    {
        if (CoffeeGrinder())
        {
            cout << "Вжух!!!" << endl;
        }
        else
        {
            cout << "Бом Бом" << endl;
        }
    }
};
void fillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << "\t";
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    cin >> a;
    int SIZE = a;
    int* arr = new int[SIZE];
    fillArray(arr, SIZE);
    ShowArray(arr, SIZE);
    delete[] arr;
    arr = nullptr;
    cout << arr;
}














