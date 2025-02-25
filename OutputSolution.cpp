#include "OutputSolution.h"
#include "Solution.h"
#include "CheckSolution.h"
#include <iostream>

using namespace std;

void OutputSolution::setOutput(int example, int x, int expected){
	this->example = example;
	this->x = x;
	this->expected = expected;
	this->result = 0;
}

void OutputSolution::setResult(){
	Solution solution;
	this->result = solution.reverse(this->x);
}

void OutputSolution::printOutput(){
	cout << "============ Пример " << this->example << " ============" << endl;
	cout << " Входные данные: x = " << this->x << endl;
	cout << " Ожидаемый результат: " << this->expected << endl;
	setResult();
	cout << " Полученный результат: " << this->result << endl;
	cout << "============ Проверка =============" << endl;
	checkPrint();
	cout << "===================================\n" << endl;
}

void OutputSolution::checkPrint(){
	CheckSolution check(this->expected, this->result);
	if (check.check()) {
		cout << " Результат верный" << endl;
	}
	else {
		cout << " Результат неверный" << endl;
	}
}

