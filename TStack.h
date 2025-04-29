// �����: ������ �.�.

#pragma once
#include "C:\Users\vovai\OneDrive\������� ����\Arrays\TemplList\TList.h"

/// <summary>
/// ��������� ����� ����
/// </summary>
/// <typeparam name="T"></typeparam>
template <typename T>
class TemplateStack
{
private:
	LinkedList<T>* lst; // ���������� ������ ���������� �������� �����

public:

	/// <summary>
	/// ����������� �� ��������� (������ ������)
	/// </summary>
	TemplateStack()
	{
		lst = new LinkedList<T>;
	}

	/// <summary>
	/// ��������� ������� �����
	/// </summary>
	/// <returns>
	/// ���������� ��������� � �����
	/// </returns>
	size_t getSize() const
	{
		return lst->getSize();
	}

	/// <summary>
	/// ������� �� ������� �����
	/// </summary>
	/// <param name="data - �������"></param>
	/// <returns>
	/// ��������� �� ���� �� ����������� ���������
	/// </returns>
	Node<T>* push(T data)
	{
		return lst->pushBack(data);
	}

	/// <summary>
	/// �������� �� ������� �����
	/// </summary>
	void pop()
	{
		return lst->popBack();
	}

	/// <summary>
	/// �������� �� ������ ����
	/// </summary>
	/// <returns>
	/// 0 - ���� �� ������; 1 - ���� ������
	/// </returns>
	bool isEmpty()
	{
		return lst->getSize() == 0;
	}

	/// <summary>
	/// ������� �����
	/// </summary>
	void clear()
	{
		lst->clear();
	}

	/// <summary>
	/// ��������� �������� �� ������� �����
	/// </summary>
	/// <returns>
	/// ������� �� ������� �����
	/// </returns>
	const T& top() const
	{
		if (getSize() == 0)
		{
			throw out_of_range("���� ������");
		}
		return lst->At(getSize() - 1);
	}

	/// <summary>
	/// ��������� �������� �� ��� �����
	/// </summary>
	/// <returns>
	/// ������� �� ��� �����
	/// </returns>
	T& peek() const
	{
		if (getSize() == 0)
		{
			throw out_of_range("���� ������");
		}
		return lst->At(0);
	}

	/// <summary>
	/// ����������
	/// </summary>
	~TemplateStack()
	{
		delete lst;
	}
};

/// <summary>
/// ����� ������� ���������� ������ ����
/// </summary>
void test();