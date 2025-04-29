// Автор: Игонин В.Ю.

#include "TStack.h"
#include <cassert>

/// <summary>
/// Тесты методов шаблонного класса стек
/// </summary>
void test()
{
	//тест конструктора по умолчанию
	TemplateStack<int> stack1; // создаем пустой стек
	TemplateStack<int> stack2; // создаем пустой стек
	assert(stack1.getSize() == 0); // получение размера стека
	assert(stack2.getSize() == 0); // получение размера стека
	assert(stack1.isEmpty() == 1); // пустой ли стек
	assert(stack2.isEmpty() == 1); // пустой ли стек

	//тест вставки в стек
	stack1.push(0); // вставка в пустой стек
	assert(stack1.getSize() == 1); // получение размера стека
	assert(stack1.isEmpty() == 0); // пустой ли стек
	assert(stack1.top() == 0); // элемент на вершине стека
	assert(stack1.peek() == 0); // элемент на дне стека

	stack1.push(1); // вставка в непустой стек
	assert(stack1.getSize() == 2); // получение размера стека
	assert(stack1.isEmpty() == 0); // пустой ли стек
	assert(stack1.top() == 1); // элемент на вершине стека
	assert(stack1.peek() == 0); // элемент на дне стека

	stack1.push(2); // вставка в непустой стек
	assert(stack1.getSize() == 3); // получение размера стека
	assert(stack1.isEmpty() == 0); // пустой ли стек
	assert(stack1.top() == 2); // элемент на вершине стека
	assert(stack1.peek() == 0); // элемент на дне стека

	//тест удаления из стека
	stack1.pop(); // удаление из непустого стека
	assert(stack1.getSize() == 2); // получение размера стека
	assert(stack1.isEmpty() == 0); // пустой ли стек
	assert(stack1.top() == 1); // элемент на вершине стека
	assert(stack1.peek() == 0); // элемент на дне стека

	stack1.pop(); // удаление из непустого стека
	assert(stack1.getSize() == 1); // получение размера стека
	assert(stack1.isEmpty() == 0); // пустой ли стек
	assert(stack1.top() == 0); // элемент на вершине стека
	assert(stack1.peek() == 0); // элемент на дне стека

	stack2.pop(); // удаление из пустого стека (ничего не сделает)
	assert(stack2.getSize() == 0); // получение размера стека
	assert(stack2.isEmpty() == 1); // пустой ли стек

	//тест очистки стека
	stack1.clear(); // стек с 1 элементом
	assert(stack1.getSize() == 0); // получение размера стека
	assert(stack1.isEmpty() == 1); // пустой ли стек
	stack2.clear(); //пустой стек
	assert(stack2.getSize() == 0); // получение размера стека
	assert(stack2.isEmpty() == 1); // пустой ли стек
}