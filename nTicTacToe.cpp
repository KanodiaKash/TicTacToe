#include <iostream>
using namespace std;

int main()
{
    int flag = 0;
    int n;
    cout << "Enter n for nXn TicTacToe" << endl;
    cin >> n;
    char arr[n][n] = {1};
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = temp;
            temp++;
        }
    }

    int count = 1;
    while (1)
    {
        int name = 1;
        if (count % 2 == 0)
        {
            name = 2;
        }
        cout << "Player " << name << ": Enter row" << endl;
        int row;
        cin >> row;
        cout << "Player " << name << ": Enter column" << endl;
        int col;
        cin >> col;
        char value;
        if (count % 2 == 0)
        {
            value = 'X';
        }
        else
        {
            value = '0';
        }
        arr[row][col] = value;

        // check col
        for (int j = 0; j < n; j++)
        {
            int check = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i][j] != arr[i + 1][j])
                {
                    check = 1;
                    break;
                }
            }
            if (check == 0)
            {
                if (count % 2 != 0)
                {
                    cout << "Player 1 Wins" << endl;
                }
                else
                {
                    cout << "Player 2 Wins" << endl;
                }
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }

        // check row
        for (int i = 0; i < n; i++)
        {
            int check = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[i][j] != arr[i][j + 1])
                {
                    check = 1;
                    break;
                }
            }
            if (check == 0)
            {
                if (count % 2 != 0)
                {
                    cout << "Player 1 Wins" << endl;
                }
                else
                {
                    cout << "Player 2 Wins" << endl;
                }
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }

        // check diag
        int check = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i][i] != arr[i + 1][i + 1])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            if (count % 2 != 0)
            {
                cout << "Player 1 Wins" << endl;
            }
            else
            {
                cout << "Player 2 Wins" << endl;
            }
            flag = 1;
            break;
        }

        if (flag == 1)
        {
            break;
        }

        check = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i][n - 1 - i] != arr[i + 1][n - i - 2])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            if (count % 2 != 0)
            {
                cout << "Player 1 Wins" << endl;
            }
            else
            {
                cout << "Player 2 Wins" << endl;
            }
            flag = 1;
            break;
        }

        if (flag == 1)
        {
            break;
        }

        if (count == n * n)
        {
            cout << "DRAW" << endl;
            break;
        }
        count++;
    }
}
