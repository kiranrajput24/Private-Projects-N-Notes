#include <iostream>
using namespace std;

struct BST
{
  int INFO;
  BST *LEFT;
  BST *RIGHT;
} * ROOT,
    *LOC,
    *PAR;

BST *newNode(int ITEM)
{
  BST *temp = new BST;
  temp->INFO = ITEM;
  temp->LEFT = temp->RIGHT = NULL;
  return temp;
}

void FINDBST(int ITEM)
{
  struct BST *SAVE;
  struct BST *PTR;
  if (ROOT == NULL)
  {
    LOC = NULL;
    PAR = NULL;
    return;
  }

  if (ITEM == ROOT->INFO)
  {
    LOC = ROOT;
    PAR = NULL;
    return;
  }

  SAVE = ROOT;

  if (ITEM < ROOT->INFO)
    PTR = ROOT->LEFT;
  else
    PTR = ROOT->RIGHT;

  while (PTR != NULL)
  {
    if (ITEM == PTR->INFO)
    {
      PAR = SAVE;
      LOC = PTR;
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
  struct BST *SAVE;
  struct BST *PTR;
  FINDBST(ITEM);
  if (LOC != NULL)
    return;

  BST *NEW = newNode(ITEM);

  if (PAR == NULL)
    ROOT = NEW;
  else if (ITEM < PAR->INFO)
    PAR->LEFT = NEW;
  else
    PTR->RIGHT = NEW;

  return;
}

void INODERTRAV(struct BST *PTR)
{

  if (PTR)

  {
    INODERTRAV(PTR->LEFT);
    cout << PTR->INFO << " ";
    INODERTRAV(PTR->RIGHT);
  }
}

int main()
{

  INSBST(5);
  INSBST(4);
  INSBST(7);
  INSBST(20);

  // ROOT = newNode(5);
  // ROOT->LEFT = newNode(9);
  // ROOT->RIGHT = newNode(8);

  INODERTRAV(ROOT);
}
