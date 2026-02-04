#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        // The string that will be checked.
        string str;

        // A variable that stored the maximum number of numbers in a row.
        int len = 0;
        // Service variable.
        int t = 0;
        // Error checking.
        // If it stored 0, then there is no error.
        // If it stored 1, then the string contains characters other than '0' or '1'.
        int check = 0;

        cout << "String: ";
        cin >> str;

        if (str == "e" || str == "E")
        {
            break;
        }

        for (int i = 0; i < str.length(); i++)
        {
            // Check for other characters
            if (str[i] == '0' || str[i] == '1')
            {
                // Check for '1', if there is a '1' in this cycle, then the service var is added 1, then it checks whether the service var is more than the maximum number in a row; 
                // if so, the value of the max num ia a row var is assigned to the service var; 
                // if there is a '0' in this cycle, the value of the service var is reset to 0.
                if (str[i] == '1')
                {
                    t += 1;
                    if (len < t)
                    {
                        len = t;
                    }
                }
                else if (str[i] == '0')
                {
                    t = 0;
                }
            }
            else
            {
                check = 1;
                break;
            }
        }

        // If there is an error, it is displayed; 
        // If there is no error, the result of the max len check is displayed.
        if (check != 1)
        {
            cout << "Maximum number of ones in a row: " << len << endl;
        }
        else
        {
            cout << "Error!!!\n \nThe string must not contain any characters other than 1 or 0\n";
        }
    }

    return 0;
}
