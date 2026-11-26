#include <iostream>
using namespace std;

using std::cout;
using std::endl;


string to_upper(string agv)
{
    for (size_t i = 0; i < agv.length(); i += 1)
        agv[i] = toupper(agv[i]);
    return (agv);

}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
        cout << to_upper(argv[i]);
    cout << endl;
    return (0);
}