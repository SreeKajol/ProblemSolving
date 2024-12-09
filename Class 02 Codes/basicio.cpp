#include <iostream>
using namespace std;

int main()
{
    // Basic Input Output
    string name; // decalre string
    cout << "Enter Your Name\n";
    // cin >> name; // value input niye name er vetor rekhe dilamEMran
    getline(cin, name); // this is the best way to get a line input
    cout << "Enter Your Age\n";
    int age; // declaration of variable of type integer
    cin >> age;
    cout << "Hello ";
    cout << name;
    cout << "\nLets get ready to be a Coder\n";
    cout << "Your Age is " << age;
    cout << "\nEnter Your JSC GPA\n";
    float jscgpa;
    cin >> jscgpa;
    cout << "Your  JSC GPA is " << jscgpa;
    printf("\nusing printf function  My GPA in JSC is %f ", jscgpa);

    // Branching Statements

    int a, b;
    cout << "Enter 2 Number" << endl;
    cin >> a >> b;
    int c = a > b; // computer considers 0 as False and 1-any value is True
    cout << "The value of C is " << c << endl;
    if (a > b)
    {
        cout << a << " is Greter than " << b << endl;
    }
    else if (a == b)
    {
        cout << "A is Equal to B";
    }
    else
    {
        cout << "B is Greter than A";
    }

    // Another Example of Branching
    cout << "Enter Your Marks" << endl;
    int number;
    cin >> number;
    if (number >= 80 && number <= 100)
    {
        cout << "A+\n";
    }
    else if (number >= 70 && number < 80)
    {
        cout << "A-\n";
    }
    else if (number > 100 || number < 0)
    {
        cout << "Invalid Marks\n";
    }
    else
    {
        cout << "Failed \n";
    }

    // Size Calculation
    cout << "\nThe size of Integer variable is " << sizeof(int) << endl;
    cout << "\nThe size of Longer Integer variable is " << sizeof(long int) << endl;
    cout << "\nThe size of Longer Longer Integer variable is " << sizeof(long long int) << endl;
    cout << "\nThe size of Char variable is " << sizeof(char) << endl;
    cout << "\nThe size of String variable is " << sizeof(string) << endl;
    cout << "\nThe size of Float variable is " << sizeof(float) << endl;
    cout << "\nThe size of Float variable is " << sizeof(double) << endl;

    // Loops
    int i = 0;
    while (i < 5)
    {
        cout << "Sorry" << endl;
        i++;
    }

    int j = 10;
    while (j > 5)
    {
        cout << "Extremely Sorry" << endl;
        j--;
    }

    // Pattens Using Loops
    int number;
    cout << "Give Number" << endl;
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
