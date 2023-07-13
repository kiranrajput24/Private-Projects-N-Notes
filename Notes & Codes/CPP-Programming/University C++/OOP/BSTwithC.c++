#include <iostream>
using namespace std;

struct BST
{
    int INFO;
    BST *LEFT;
    BST *RIGHT;
};
BST *LOC;
BST *PAR;
BST *SAVE;
BST *PTR;
BST *ROOT;

void FINDBST(int ITEM)
{
    if (ROOT == NULL)
    {
        LOC = NULL;
        PAR = NULL;
        return;
    }

    if (ITEM == ROOT->INFO)
    {
        LOC == ROOT;
        PAR == NULL;
        return;
    }

    SAVE == ROOT;

    if (ITEM < ROOT->INFO)
        PTR = ROOT->LEFT;
    else
        PTR = ROOT->RIGHT;

    while (PTR != NULL)
    {
        if (ITEM == PTR->INFO)
        {
            LOC = PTR;
            PAR = SAVE;
            return;
        }
        else if (ITEM < PTR->INFO)
        {
            SAVE = PTR;
            PTR = PTR->LEFT;
        }

        else
        {
            SAVE = PTR;
            PTR = PTR->RIGHT;
        }
    }

    LOC = NULL;
    PAR = SAVE;
}





void INSBST(int ITEM)
{
    FINDBST(ITEM);
    if (LOC != NULL)
        return;

    BST *NEW = new BST;
    NEW->INFO = ITEM;
    NEW->LEFT = NEW->RIGHT = NULL;

    if (PAR == NULL)
        ROOT = NEW;
    if (ITEM < PAR->INFO)
        PAR->LEFT = NEW;
    else
        PTR->RIGHT = NEW;

    return;
}





void TRAVBST(BST *PTR)
{

    if (PTR = NULL)
        return;

    TRAVBST(PTR->LEFT);
    cout << PTR->INFO << " ";
    TRAVBST(PTR->RIGHT);
}


int main()
{
for(int i=0;i<10;i++)
{
    INSBST(i);
}

TRAVBST(ROOT);
}
