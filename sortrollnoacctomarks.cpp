#include <iostream>
using namespace std;

int main()
{
    int total;
    cin >> total; // How much data you want to input

    string ID[100];
    string name[100];
    int grade[total];

    for (int i = 0; i < total; i++) // Inputting the data
    {
        cin >> ID[i]; // Student ID
        cin >> name[i]; // student name
        cin >> grade[i]; // student marks
    }

    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (grade[j] < grade[i]) {
                int temp = grade[j];
                grade[j] = grade[i];
                grade[i] = temp;
            }
        }
    }

    for (int i = 0; i < total; i++) {
        cout << ID[i] << " " << name[i] << " " << grade[i] << endl;
    }
    return 0;
}
