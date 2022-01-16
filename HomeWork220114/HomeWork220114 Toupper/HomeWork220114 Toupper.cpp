// HomeWork220114 Toupper.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void ToUpper(const char* _Left, char* _Right)
{
	int LeftIndex = 0;
	int RightIndex = 0;
	for (
		LeftIndex = 0;
		0 != _Left[LeftIndex];
		LeftIndex += 1
		)

	{
		char ValueLeft = _Left[LeftIndex];
		char ValueRight = _Right[RightIndex];

		if (69 >= ValueLeft)
		{
			_Right[RightIndex] = _Left[LeftIndex];
			RightIndex += 1;
		}

		if ('a' == ValueLeft)
		{
			_Right[RightIndex] = 'A';
			RightIndex += 1;
		}

		if ('b' == ValueLeft)
		{
			_Right[RightIndex] = 'B';
			RightIndex += 1;
		}

		if ('c' == ValueLeft)
		{
			_Right[RightIndex] = 'C';
			RightIndex += 1;
		}

		if ('e' == ValueLeft)
		{
			_Right[RightIndex] = 'E';
			RightIndex += 1;
		}
	}
	_Right[RightIndex] = 0;
	return;
}
int main()
{
	{
		char Text[100] = { 0,};

		ToUpper("12abCcEee", Text);
		//      "12ABCCEEE"
		printf_s(Text);
	}
}

