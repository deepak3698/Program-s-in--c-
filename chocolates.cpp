/*
Question:-You have to buy chocolates
    by the given rupees you
    can buy a chocolate in Rs.1 or you can
    exchange 3 wrappers and get 1 chocolate.

*/

#include <iostream>
using namespace std;

int main()
{

    int chocolate, wrapper, rupees;
    cout << "How Many rupees do you have? ";
    cin >> rupees;
    chocolate = rupees;
    wrapper = rupees;
    while (wrapper != 0)
    {
        if (wrapper % 3 == 0)
        {
            chocolate = chocolate + wrapper / 3;
            wrapper = wrapper / 3;
        } //if closing
        else
        {
            if (wrapper <= 2)
            {
                break;
            }
            chocolate = chocolate + wrapper / 3;
            wrapper = wrapper % 3 + wrapper / 3;
        } //else closing

    } //while closing

    cout << "You can buy " << chocolate << " chocolates from Rs." << rupees;

    return 0;
}
