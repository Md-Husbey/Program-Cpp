#include <bits/stdc++.h>
using namespace std;
class runner
{
private:
    string name;
    int time;

public:
    void input()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the time: ";
        cin >> time;
    }
    void output()
    {
        cout << "Name: " << name << endl;
        cout << "Time: " << time << endl;
    }
    friend runner first(runner r[], int n, int a);
};
runner first(runner r[], int n, int a)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            runner temp;
            if (r[i].time > r[j].time)
            {
                temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }
        }
    }
    if (a == 0)
    {
        return r[0];
    }
    else if (a == 1)
    {
        return r[1];
    }
    else if (a == 2)
    {
        return r[2];
    }
}
int main()
{
    int n;
    cout << "How many Participent info :";
    cin >> n;
    runner r[n], firstplace[3];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the info:" << i + 1 << endl;
        r[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " Runner info: " << endl;
        r[i].output();
    }
    cout << "Places: " << endl;
    for (int i = 0; i < 3; i++)
    {
        firstplace[i] = first(r, n, i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " place: " << endl;
        firstplace[i].output();
    }

    return 0;
}
