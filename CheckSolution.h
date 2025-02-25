#pragma once
class CheckSolution{
public:
	CheckSolution(int expected, int result) {
		this->expected = expected;
		this->result = result;
	}

	bool check();

private:
	int expected, result;
};

