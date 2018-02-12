/*
//Q1 GuessNum
#include <iostream>

using namespace std;

int main()
{
    int o = 50;
    int n;
    cout << "I have a number between 1 and 100." << endl;
    cout << "Can you guess my number?" << endl;
    cout << "Guess: ";
    cin >> n;
    
    while(n < o || n > o)
    {
        if(n < o)
        {
            cout << "Too low. Try again" << endl;
            cout << "Guess: ";
            cin >> n;
        }
        
        else
        {
            cout << "Too high. Try again" << endl;
            cout << "Guess: ";
            cin >> n;
        }
    }
    cout << "Excellent! Correct guess." << endl;
    
    return 0;
}
*/

/*
//Q2 Average
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n;
    float m = 0;
    int a = 0;
    
    do
    {
        cout << "Input an integer: ";
        cin >> n;
        if(n > 0)
        {
            m = m + n;
            a++;
        }
    }
    while (n != 0.0);
    cout << setprecision(3) << fixed << "Average of all positive values is " << m / a << endl;
    
    return 0;
}
*/

/*
//Q3 SumOdd
#include <iostream>

using namespace std;

int main()
{
    int A, B;
    int a,b;
    cout << "Please input value A: ";
    cin >> A;
    cout << "Please input value B: ";
    cin >> B;
    
    for (int i = 0; i == A%2 || i == B%2; i++)
    {
        if(A%2 != 0)
        {
            a = A-1;
        }
        else
        {
            b = B-1;
        }
    }
    
    if (A > B)
    {
        cout << "Sum of odd integers from " << A << " to " << B << " is " << (A + B)/2 * ((A-B)/2+1) << endl;
    }
    
    else
    {
        cout << "Sum of odd integers from " << A << " to " << B << " is " << (A + B)/2 * ((B-A)/2+1) << endl;
    }
    return 0;
}
*/
