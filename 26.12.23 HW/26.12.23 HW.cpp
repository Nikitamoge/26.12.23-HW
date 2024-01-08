#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<cstring>

using namespace std;


//Task 1
//class Contact
//{
//    char* name;
//    char* lastname;
//    char* middlename;
//    char* phoneNumber;
//public:
//    Contact() : name(nullptr), lastname(nullptr), middlename(nullptr), phoneNumber(nullptr) {}
//
//    Contact(const char* Name, const char* LastName, const char* Surname, const char* PhoneNumber)
//    {
//        name = new char[strlen(Name) + 1];
//        strcpy_s(name, strlen(Name) + 1, Name);
//
//        lastname = new char[(strlen(LastName) + 1)];
//        strcpy_s(lastname, strlen(LastName) + 1, LastName);
//
//        middlename = new char[(strlen(Surname) + 1)];
//        strcpy_s(middlename, strlen(Surname) + 1, Surname);
//
//        phoneNumber = new char[(strlen(PhoneNumber) + 1)];
//        strcpy_s(phoneNumber, strlen(PhoneNumber) + 1, PhoneNumber);
//
//    }
//    Contact(const Contact& other)
//    {
//        name = new char[strlen(other.name) + 1];
//        strcpy_s(name, strlen(other.name) + 1, other.name);
//
//        lastname = new char[strlen(other.lastname) + 1];
//        strcpy_s(lastname, strlen(other.lastname) + 1, other.lastname);
//
//        middlename = new char[strlen(other.middlename) + 1];
//        strcpy_s(middlename, strlen(other.middlename) + 1, other.middlename);
//
//        phoneNumber = new char[strlen(other.phoneNumber) + 1];
//        strcpy_s(phoneNumber, strlen(other.phoneNumber) + 1, other.phoneNumber);
//    }
//    void Set()
//    {
//        char bufferName[30];
//        char bufferLastName[30];
//        char bufferSurname[30];
//        char bufferPhoneNumber[30];
//
//
//        cout << "Enter the name: ";
//        cin >> bufferName;
//
//
//        cout << "Enter your lastname: ";
//        cin >> bufferLastName;
//
//
//        cout << "Enter your surname: ";
//        cin >> bufferSurname;
//
//
//        cout << "Enter your phonenumber: ";
//        cin >> bufferPhoneNumber;
//
//
//        name = new char[strlen(bufferName) + 1];
//        strcpy_s(name, strlen(bufferName) + 1, bufferName);
//
//        lastname = new char[strlen(bufferLastName) + 1];
//        strcpy_s(lastname, strlen(bufferLastName) + 1, bufferLastName);
//
//        middlename = new char[(strlen(bufferSurname) + 1)];
//        strcpy_s(middlename, strlen(bufferSurname) + 1, bufferSurname);
//
//        phoneNumber = new char[(strlen(bufferPhoneNumber) + 1)];
//        strcpy_s(phoneNumber, strlen(bufferPhoneNumber) + 1, bufferPhoneNumber);
//
//    }
//
//
//    void Output()
//    {
//        if (name == nullptr || lastname == nullptr || middlename == nullptr || phoneNumber == nullptr)
//        {
//            cout << "Not full contact." << endl;
//            return;
//        }
//        cout << "Name: " << name << endl;
//        cout << "LastName: " << lastname << endl;
//        cout << "Surname: " << middlename << endl;
//        cout << "Phonenumber: " << phoneNumber << endl;
//    }
//    ~Contact()
//    {
//
//    }
//};
//
//
//Contact* addContact(Contact* contact, int& size, const Contact& newStudent)
//{
//    Contact* newStudents = new Contact[size + 1];
//    for (int i = 0; i < size; i++)
//    {
//        newStudents[i] = contact[i];
//    }
//    newStudents[size] = newStudent;
//    delete[] contact;
//    size++;
//    return newStudents;
//}
//
//
//Contact* removeStudent(Contact* сontact, int& size, int index)
//{
//    if (index < 0 || index >= size)
//    {
//
//        cout << "Unknown index: " << index << endl;
//        return сontact;
//    }
//    Contact* newStudents = new Contact[size - 1];
//    for (int i = 0; i < index; ++i) {
//        newStudents[i] = сontact[i];
//    }
//    for (int i = index + 1; i < size; ++i) {
//        newStudents[i - 1] = сontact[i];
//    }
//    delete[] сontact;
//    size--;
//    return newStudents;
//}
//
//
//void printContact(Contact* contact, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        contact[i].Output();
//    }
//}


//Task 2
class MyString {
    char* str;
    int size;
    static int count;

public:
    MyString() : size(80)
    {
        str = new char[size];
        for (int i = 0; i < size; i++)
            str[i] = '\0';
        count++;
    }

    MyString(int n) : size(n)
    {
        str = new char[size];
        for (int i = 0; i < size; i++)
            str[i] = '\0';
        count++;
    }

    MyString(const char* s)
    {
        size = strlen(s) + 1;
        str = new char[size];
        strcpy(str, s);
        count++;
    }

    MyString(const MyString& source)
    {
        size = source.size;
        str = new char[size];
        strcpy(str, source.str);
        count++;
    }

    void input()
    {
        char buffer[80];
        cout << "Enter your string: ";
        cin >> buffer;
        delete[] str;
        str = new char[strlen(buffer) + 1];
        strcpy_s(str, strlen(buffer) + 1, buffer);
    }

    void output() const
    {
        cout << "String: " << str << endl;
    }

    static int getCount()
    {
        return count;
    }

    ~MyString()
    {
        delete[] str;
        count--;
    }
};

int MyString::count = 0;


int main()
{
    //Task 1
    /*int size = 1;
    Contact* сontact = new Contact[size];

    сontact[0] = { "Oleg", "Kravchuk", "Sergeevich", "+380974862369" };
    Contact newContact = { "Sasha", "Ovcharenko", "Genadich", "+380964371963" };

    сontact = addContact(сontact, size, newContact);
    printContact(сontact, size);

    сontact = removeStudent(сontact, size, 0);
    printContact(сontact, size);

    delete[] сontact;*/


    //Task 2
   MyString str1;
    str1.input();
    str1.output();

    cout << "Number of created objects-strings: " << MyString::getCount() << endl;

    return 0;
}