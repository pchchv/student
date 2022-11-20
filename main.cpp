#include <iostream>
#include <stdlib.h>

using namespace std;

class STUDENT
{
    int STU_ROLL;
    char STU_NAME[20];
    char STU_SEC[20];
    char STU_DEPT[20];

public:
    int Insert(STUDENT *p, int n)
    {
        cout << "Enter ROll: ";
        cin >> p[n].STU_ROLL;
        cout << "Enter Name: ";
        cin >> p[n].STU_NAME;
        cout << "Enter SECTION: ";
        cin >> p[n].STU_SEC;
        cout << "Enter DEPT: ";
        cin >> p[n].STU_DEPT;
        cout << "\nRECORD INSERTED...\n";
        n++;
        return n;
    }

    void Search(STUDENT *p, int roll, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i].STU_ROLL == roll)
            {
                cout << "ROLL\tNAME\tSEC\tDEPT\n==============================================\n";
                cout << STU_ROLL << "\t" << STU_NAME << "\t" << STU_SEC << "\t" << STU_DEPT << "\n";
                break;
            }
        }
        if (p[i].STU_ROLL != roll)
        {
            cout << "\nRECORD NOT FOUND.\n";
        }
    }

    void Display()
    {
        cout << STU_ROLL << "\t" << STU_NAME << "\t" << STU_SEC << "\t" << STU_DEPT << "\n";
    }

    int Delete(STUDENT *p, int n, int roll)
    {
        int j = 0, k, flag = 0;
        for (j = 0; j < n; j++)
        {
            if (p[j].STU_ROLL == roll)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            for (k = j; k < n; k++)
            {
                p[k] = p[k + 1];
            }
            cout << "\nRECORD DELETED.\n";
            return n - 1;
        }
        else
        {
            cout << "\nRecord Not Found\n";
            return n;
        }
    }

    int Update(STUDENT *p, int roll, int n)
    {
        int ch1;

        for (int i = 0; i < n; i++)
        {
            if (p[i].STU_ROLL == roll)
            {
                while (1)
                {
                    cout << "\n!!===OPTIONS IN UPDATE===!!\n";
                    cout << "\n 1. Update Section";
                    cout << "\n 2. Update Deptarment";
                    cout << "\n 3. Update Both";
                    cout << "\n 4. Return to main Menu";
                    cout << "\n\n Enter Your Choice:";
                    cin >> ch1;
                    switch (ch1)
                    {
                    case 1:
                        cout << "Section:";
                        cin >> p[i].STU_SEC;
                        cout << "Record Updated...\n";
                        break;
                    case 2:
                        cout << "DEPT:\t";
                        cin >> p[i].STU_DEPT;
                        cout << "Record Updated...\n";
                        break;
                    case 3:
                        cout << "Section:";
                        cin >> p[i].STU_SEC;
                        cout << "DEPT:\t";
                        cin >> p[i].STU_DEPT;
                        cout << "Record Updated...\n";
                        break;
                    case 4:
                        return n;
                    default:
                        cout << "!! Wrong Key !!";
                        break;
                    }
                }
                break;
            }
        }

        if (p[i].STU_ROLL != roll)
        {
            cout << "\nRecord Not Found\n\n";
        }
    }
};
