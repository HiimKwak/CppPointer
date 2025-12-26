#include <iostream>

// NULL == #defined NULL 0
// #define은 나중에 컴파일할 때 숨겨진 값으로 치환해주는 장치
// nullptr은 도입된지 얼마 안됨.
// 포인터에 NULL을 도입하면 0번째 주소에 할당함.
// 0번째 주소는 없는 주소로 간주했지만 실제로 유효하기 때문에 버그 발생 가능성이 존재함(과거 역사)
// NullReferenceException - 하드웨어 혹은 운영체제에서 잡음

// Game = 미들웨어 = OS 위에서 돌아가는 모든 프로그램

int main() 
{
	// Pointer (주소를 저장하는 int 변수)
	int test = 10;
	// 다른 변수의 주소를 가져올 때는 & 연산자 활용. C문법임
	// 지금은 test의 주소를 가지고 있음
	int *pointer = &test;
	// double pointer
	// 게임개발에선 더블포인터는 자주 다룸. 객체 크기가 커서 스택보다는 힙을 많이 쓰고, 포인터의 배열이나 같은 것들을 씀
	int **pointer2 = &pointer;

	// int *pointer; int* pointer; 변수 앞이나 타입 뒤에 붙여도 됨

	// dereferencing 역참조: 포인터 주소로 접근해 값을 가져오거나 수정함. * 연산자 활용.
	*pointer = 30;

	std::cout << test << "\n";
	std::cout << &test << "\n";
	std::cout << *pointer << "\n";
	std::cout << pointer << "\n";

	// 동적 할당
	int *dynamicPointer = new int;
	*dynamicPointer = 10;

	std::cout << sizeof(dynamicPointer) << "\n"; // 메모리 주소 공간이 8바이트, new int가 8바이트는 아님
	// 64비트는 메모리를 8바이트로, 32비트는 메모리를 4바이트로 자름. 언리얼은 32비트 지원조차 안함
	// CPU 아키텍쳐가 64비트인지 32비트인지에 따라 결정됨. 메모리를 한번에 64비트까지 읽을 능력이 있는지 없는지 느낌
	std::cout << sizeof(*dynamicPointer) << "\n"; // int는 4바이트(ms 컴파일러 기준, 컴파일러마다 다를 수 있음)

	// 로직상 의미는 없음.
	// 바로 종료되지 말라고 추가함.
	// 키입력 코드 c-in
	// std = namespace
	std::cin.get();
}