#include <iostream>
#include "singly_linked_list.hpp"

int main()
{
    LinkedList<int> lst;
    for(int i = 1; i <= 20; ++i)
        lst.pushBack(i * i);

    for(int i = 0; i < 3; ++i)
    {
        lst.popFront();
        lst.popBack();
    }

    lst.pushFront(100);
    lst.pushFront(200);
    lst.pushFront(300);

    auto it = lst.head();
    int k = 1;
    while(k < 3)
    {
        it = it->next();
        ++k;
    }
    lst.insertAt(it, 404);
    lst.removeAt(it);

    lst.print();

    LinkedList<int> lst2;
    for(int i = 1; i <= 7; ++i)
        lst2.pushBack(i);
    lst2.print();
    lst.copyList(lst2);
    lst.print();

    LinkedList<int> lst3(lst2);
    lst3.print();

    LinkedList<int> lst4 = lst3;
    lst4.pushFront(100);
    lst4.pushBack(404);
    lst4.print();
    lst3.print();
    return 0;
}
