// HomeWork220114 CharChange.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
// 좀 어려울거다.
void CharChange(char* _Text, char _Prev, char _Next)
{
	int TextIndex = 0;
	for (
		TextIndex = 0; 
		0 != _Text[TextIndex];
		TextIndex += 1
		)
	{
		char TextValue = _Text[TextIndex];

		if (_Prev == TextValue)
		{
			_Text[TextIndex] = _Next;
			TextIndex += 1;
		}
	}
	_Text[TextIndex] = 0;
	return;

}
int main()
{
	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd

		printf_s(Text);
	}
}

