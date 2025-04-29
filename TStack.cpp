// �����: ������ �.�.

#include "TStack.h"
#include <cassert>

/// <summary>
/// ����� ������� ���������� ������ ����
/// </summary>
void test()
{
	//���� ������������ �� ���������
	TemplateStack<int> stack1; // ������� ������ ����
	TemplateStack<int> stack2; // ������� ������ ����
	assert(stack1.getSize() == 0); // ��������� ������� �����
	assert(stack2.getSize() == 0); // ��������� ������� �����
	assert(stack1.isEmpty() == 1); // ������ �� ����
	assert(stack2.isEmpty() == 1); // ������ �� ����

	//���� ������� � ����
	stack1.push(0); // ������� � ������ ����
	assert(stack1.getSize() == 1); // ��������� ������� �����
	assert(stack1.isEmpty() == 0); // ������ �� ����
	assert(stack1.top() == 0); // ������� �� ������� �����
	assert(stack1.peek() == 0); // ������� �� ��� �����

	stack1.push(1); // ������� � �������� ����
	assert(stack1.getSize() == 2); // ��������� ������� �����
	assert(stack1.isEmpty() == 0); // ������ �� ����
	assert(stack1.top() == 1); // ������� �� ������� �����
	assert(stack1.peek() == 0); // ������� �� ��� �����

	stack1.push(2); // ������� � �������� ����
	assert(stack1.getSize() == 3); // ��������� ������� �����
	assert(stack1.isEmpty() == 0); // ������ �� ����
	assert(stack1.top() == 2); // ������� �� ������� �����
	assert(stack1.peek() == 0); // ������� �� ��� �����

	//���� �������� �� �����
	stack1.pop(); // �������� �� ��������� �����
	assert(stack1.getSize() == 2); // ��������� ������� �����
	assert(stack1.isEmpty() == 0); // ������ �� ����
	assert(stack1.top() == 1); // ������� �� ������� �����
	assert(stack1.peek() == 0); // ������� �� ��� �����

	stack1.pop(); // �������� �� ��������� �����
	assert(stack1.getSize() == 1); // ��������� ������� �����
	assert(stack1.isEmpty() == 0); // ������ �� ����
	assert(stack1.top() == 0); // ������� �� ������� �����
	assert(stack1.peek() == 0); // ������� �� ��� �����

	stack2.pop(); // �������� �� ������� ����� (������ �� �������)
	assert(stack2.getSize() == 0); // ��������� ������� �����
	assert(stack2.isEmpty() == 1); // ������ �� ����

	//���� ������� �����
	stack1.clear(); // ���� � 1 ���������
	assert(stack1.getSize() == 0); // ��������� ������� �����
	assert(stack1.isEmpty() == 1); // ������ �� ����
	stack2.clear(); //������ ����
	assert(stack2.getSize() == 0); // ��������� ������� �����
	assert(stack2.isEmpty() == 1); // ������ �� ����
}