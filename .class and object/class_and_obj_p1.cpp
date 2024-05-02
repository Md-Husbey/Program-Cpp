#include <bits/stdc++.h>
using namespace std;
class ABCIcecream
{
public:
    void Icecream()
    {
        cout << "Vanila Ice-cream" << endl;
    }
};
class Firstparlour : public ABCIcecream
{
public:
    void Icecream()
    {
        cout << "vanila Ice-cream " << endl;
    }
};
class Secondparlour : public Firstparlour
{
public:
    void Icecream()
    {
        cout << "vanila with chocolate Ice-cream " << endl;
    }
};
int main()
{
    ABCIcecream a;
    Firstparlour f;
    Secondparlour s;
    a.Icecream();
    f.Icecream();
    s.Icecream();

    return 0;
}