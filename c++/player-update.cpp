

#include <iostream>
using namespace std;
class player
{
    string name;
    int score;

public:
    void input()
    {
        cout << "Enter the name:" << endl;
        cin >> name;
        cout << "Enter the score" << endl;
        cin >> score;
    }
    void output()
    {
        cout << " the name:" << name << endl;
        cout << " the score:" << score << endl;
    }

    int sent_score()
    {
        return score;
    }
};
int main()
{

    player obj[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "enter the details " << i + 1 << "th player" << endl;
        obj[i].input();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << " the details " << i + 1 << "th player" << endl;
        obj[i].output();
    }

    int hs = obj[0].sent_score();
    int index;
    for (int i = 0; i < 3; i++)
    {
        if (obj[i].sent_score() > hs)
        {
            hs = obj[i].sent_score();

            index = i;
        }
    }
    cout << endl;

    obj[index].output();
    cout << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << " the details " << i + 1 << "th player" << endl;
        obj[i].output();
    }

    return 0;
}