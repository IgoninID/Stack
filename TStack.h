// Автор: Игонин В.Ю.

#pragma once
#include "C:\Users\vovai\OneDrive\Рабочий стол\Arrays\TemplList\TList.h"

/// <summary>
/// Шаблонный класс стек
/// </summary>
/// <typeparam name="T"></typeparam>
template <typename T>
class TemplateStack
{
private:
	LinkedList<T>* lst; // двусвязный список содержащий элементы стека

public:

	/// <summary>
	/// Конструктор по умолчанию (пустой список)
	/// </summary>
	TemplateStack()
	{
		lst = new LinkedList<T>;
	}

	/// <summary>
	/// Получение размера стека
	/// </summary>
	/// <returns>
	/// количество элементов в стеке
	/// </returns>
	size_t getSize() const
	{
		return lst->getSize();
	}

	/// <summary>
	/// Вставка на вершину стека
	/// </summary>
	/// <param name="data - элемент"></param>
	/// <returns>
	/// Указатель на узел со вставленным элементом
	/// </returns>
	Node<T>* push(T data)
	{
		return lst->pushBack(data);
	}

	/// <summary>
	/// Удаление из вершины стека
	/// </summary>
	void pop()
	{
		return lst->popBack();
	}

	/// <summary>
	/// Проверка на пустой стек
	/// </summary>
	/// <returns>
	/// 0 - стек не пустой; 1 - стек пустой
	/// </returns>
	bool isEmpty()
	{
		return lst->getSize() == 0;
	}

	/// <summary>
	/// Очистка стека
	/// </summary>
	void clear()
	{
		lst->clear();
	}

	/// <summary>
	/// Получение элемента на вершине стека
	/// </summary>
	/// <returns>
	/// Элемент на вершине стека
	/// </returns>
	const T& top() const
	{
		if (getSize() == 0)
		{
			throw out_of_range("Стек пустой");
		}
		return lst->At(getSize() - 1);
	}

	/// <summary>
	/// Получение элемента на дне стека
	/// </summary>
	/// <returns>
	/// Элемент на дне стека
	/// </returns>
	T& peek() const
	{
		if (getSize() == 0)
		{
			throw out_of_range("Стек пустой");
		}
		return lst->At(0);
	}

	/// <summary>
	/// Деструктор
	/// </summary>
	~TemplateStack()
	{
		delete lst;
	}
};

/// <summary>
/// Тесты методов шаблонного класса стек
/// </summary>
void test();