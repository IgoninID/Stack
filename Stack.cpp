// Автор: Игонин В.Ю.

#include <iostream>
#include "TStack.h"

int main()
{
    TemplateStack<int> stack;
    cout << stack.getSize() << " " << stack.isEmpty();
}
