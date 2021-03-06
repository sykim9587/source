/*
	상수와 변수 그리고 자료형
	1. 상수(constant): 컴퓨터가 처리할 수 있는 형태의 자료(data)
		1) 수치형 상수: 숫자
			-정수형 상수: 소수점 없음
				10진수, 8진수, 16진수
				123(아무것도 없으면 10진수), 0123 (8진수), 0x123(16진수)
			-실수형 상수: 소숫점을 가지고 있는 상수
		2) 비수치형 상수 : 문자
			-ASCII(아스키코드) : A(65) ~ Z(90), a(97) ~ z(122)
			-문자: ' '
			-문자열: " "

	2. 변수(variable): 상수가 저장되는 기억공간 (메모리)
			-하나의 변수에는 하나의 상수가 저장된다.
			-단 새로운 상수가 들어오면 그전에 상수는 지워진다.
			-형의 일치: 변수의 자료형과 저장되는 상수의 자료형은 일치해야 한다. 
			1) 자동형변환(묵시적 형변환, promotion)
				- 큰 공간에 작은 값을 담을 때
				- 데이터 손실이 없다. 
			2) 강제형변환(명시적 형변환, casting)
				- 작은 공간에 큰 값을 담을 때
				- 데이터 손실이 올 수 있다. 
			3)자료형의 크기순
				char < int < long < float < double

			4)사용자정의규칙 : 변수명, 함수명등 생성할 때의 규칙(명명법)
				-영문자, 숫자로 구성된다
				- 단 첫글자는 영문자이거나 (_ 밑줄)만 올 수 있다.
				-공백 x
				- 예약어 (keyword)는 x
			   - 기타규칙 (변수명은 의미 가지게!)
				변수명은 소문자로 작성, 두 단어가 묶여있으면 뒤단어 첫글짜 대문자
				함수명 소문자로
				매크로상수는 대문자로

	3. 자료형 (data type): 변수와 상수의 크기를 규정해 놓은 예약어
		-문자형: char
		-정수형: int (기본), long
		-실수형 : float, double (기본)
		-문자열 상수: char 배열
*/

#include <stdio.h>
int main() {

	int num1 = 10, num2 = 20;
	int sum;

	sum = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, sum);

	
	
	return 0;
}

