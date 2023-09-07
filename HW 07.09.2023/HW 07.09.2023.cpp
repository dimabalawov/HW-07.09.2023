

#include <iostream>
using namespace std;



const int NUMBERLEN=10;
class Client
{
    char* name;
    char homephone[NUMBERLEN]{};
    char workphone[NUMBERLEN]{};
    char mobphone[NUMBERLEN]{};
    char* email;
    int age;
public:
    Client()
    {
        cout << "Constructor by default" << endl;
        name = nullptr;
        email = nullptr;
        age = 0;
    }
    Client(const char* n, char h[NUMBERLEN], char w[NUMBERLEN], char m[NUMBERLEN], const char* e, int a)
    {
        name = new char[strlen(n) + 1];
        strcpy(homephone, h);
        strcpy(workphone, w);
        strcpy(mobphone, m);
        strcpy_s(name, strlen(n) + 1, n);
        email = new char[strlen(e) + 1];
        strcpy_s(email, strlen(e) + 1, e);
        age = a;
        cout << "Constructor with 6 params" << endl;
    }
    ~Client()
    {
        delete[]name;//явно освобождаем память при уничтожении объекта
        delete[]email;//явно освобождаем память при уничтожении объекта
        cout << "Destructor" << endl;
    }
};

int main()
{
    cout << "Hello World!\n";
}

