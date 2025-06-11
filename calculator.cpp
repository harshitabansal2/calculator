#include <iostream>
using namespace std;

int main() {
    int op;
    float num[10], result;

    cout << "1:Add  2:Sub  3:Mul  4:Div" << endl;
    cout << "Choose the operation: ";
    cin >> op;

    int n;

    
    if (op == 4) {
        n = 2;
        cout << "Enter 2 numbers:" << endl;
    } else {
        cout << "How many numbers? (max 10): ";
        cin >> n;
        if (n > 10) {
            cout << "Only 10 numbers allowed!" << endl;
            return 0;
        }
        cout << "Enter " << n << " numbers:" << endl;
    }

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    result = num[0];

    for (int i = 1; i < n; i++) 
	{
        if (op == 1) 
		result = result + num[i];
        else if (op == 2) 
		result = result - num[i];
        else if (op == 3)
		 result = result * num[i];
        else if (op == 4) 
		{
            if (num[i] == 0)
			 {
                cout << "Cannot divide by 0" << endl;
                return 0;
            }
            result = result / num[i];
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
