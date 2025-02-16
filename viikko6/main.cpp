#include <iostream>
#include <limits>
#include <vector>
#include "student.h"
#include <string>
#include <algorithm>

using namespace std;


int main ()
{
    int selection =0;
    vector<student>studentList;

    student a("A",30);
    student b("BEE",26);
    student c("CEE",28);
    student d("DEE",27);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    vector<student>::iterator it = studentList.begin();
    string etsittavanimi;
    do
    {
        cout<<endl;
        cout<<"Valitse"<<endl;
        cout<<"Lisaa opiskelija = 0"<<endl;
        cout<<"Tulosta opiskelijat = 1"<<endl;
        cout<<"Lajittele ja tulosta opiskelijat nimen mukaan = 2"<<endl;
        cout<<"Lajittele ja tulosta opiskelijat ian mukaan = 3"<<endl;
        cout<<"Etsi ja tulosta opiskelija = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 1:
            cout << "Opiskelijoiden nimet :";
            for (student s: studentList)
            {
                cout << s.getName() << ", ";
            }
            cout << endl;
            break;

        case 2:
            sort(studentList.begin(), studentList.end(),[](student &A, student &B)
            {
                return A.getName()<B.getName();
            }
            );

            cout << endl << "lajiteltu nimen perusteella" << endl;
            for (student &s: studentList){
                s.printStudentInfo();
            } cout << endl;
            break;

        case 3:
            sort(studentList.begin(), studentList.end(),[](student &A, student &B)
                 {
                     return A.getAge()<B.getAge();
                 }
                 );
            cout << endl << "lajiteltu ian perusteella" << endl;
            for (student &s: studentList){
                s.printStudentInfo();
            } cout << endl;
            break;
        case 4:
            cout << "Anna opiskelijoidem nimi" << endl;
            cin.ignore();
            getline(cin, etsittavanimi);
            it = find_if(studentList.begin(), studentList.end(),
                         [etsittavanimi](const student & m) -> bool { return m.getName() == etsittavanimi; });
            if (it != studentList.end()) {
                cout << "Opiskelija loytynyt";
                it-> printStudentInfo();
            } else {
                cout << "not found\n";
            }
            break;
    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}

