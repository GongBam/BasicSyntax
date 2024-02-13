#include <iostream>



int main()
{
    std::cout << "Hello C Plus Plus\n";
    std::cout << "Hello C Plus Plus" << std::endl;
    std::cout << "Hello World!\n";
    std::cout << 12345 << std::endl;    //endl : end line 주석


    /*
        정수형 타입: int(integer)    - 4byte = 32bit
        실수형 타입: float           - 4byte = 32bit
        문자형 타입: char(character) - 문자 1개
        bool형 타입: bool - yes/no -> true/false
     */

    int Number1;
    Number1 = 10; // = : 대입 연산자

    int Number2 = 20; // 변수 초기화
    int Number3 = 0;

    float PointNumber = 1.234f;

    char Word = 'A';

    bool Condition = true;

    std::cout << Number1 + 10 << std::endl;
    Number3 = Number1 + 10; //Number3 = 20이 된다.

    Number1 = Number1 + 10; //Number1 = 20이 된다.
    Number1 = Number1 + 10; //Number1 = 30이 된다.

    Number1 += 1;
    Number1 -= 1;

    Number1++;
    Number1--;


    int Number5 = 3 < 5;
    /*

        && : And (&: Ampersand) - true && true - 연산데이터가 모두 true이면 결과 true, 그 외 나머지는 모두 false
        || : Or (|: Pipe) - true || true -연산데이터가 모두 false이면 결과 false, 그외 나머지는 모두 true
        !  : Not !true => false / !false => true

    */
    std::cout << (true && true) << std::endl;


    /*

        ()속 연산식의 결과값이 true이면 코드 실행
        if (비교연산 / 논리연산 / 산술연산 / 데이터 / Condition )
            {
                실행코드
            }

    */

    int Number4 = 10;

    if (Number4 > 5) {
        std::cout << "참일때 실행" << std::endl;
    }

    if (true) {
        std::cout << "참일때 실행2" << std::endl;
    }

    // false => 0 / true=> 0을 제외한 DATA (0과 FALSE가 아니면 모두 TRUE 인 셈)


    if (0) {
        std::cout << "참일때 실행3" << std::endl;
    }

    if (1) {
        std::cout << "참일때 실행4" << std::endl;
    }

    if (3 - 2) {
        std::cout << "참일때 실행5" << std::endl;
    }

    if (3 - 1) {
        std::cout << "참일때 실행6" << std::endl;
    }

    if ('A') {
        std::cout << "참일때 실행7" << std::endl;
    }


    if (Number4 > 20) {
        std::cout << "참일때 실행8" << std::endl;
    }
    else if (Number4 > 10) {
        std::cout << "참일때 실행9" << std::endl;
    }
    else {
        std::cout << "참일때 실행10" << std::endl;
    }



    /*
        *중첩 => nested

        if(연산식)
        {
            if(연산식)
            {
                실행코드
            }

        }


    */


    /*
        switch ~ case

        switch(산술식/데이터)
        {
            case 값1 :
                실행코드1;
                break;

            case 값2 :
                실행코드2;
                break;

            case 값3 :
                실행코드3;
                break;

            default:
                실행코드4;
                                       값은 숫자도 문자도 OK
        }

    */

    int SwitchNumber = 1;

    switch (SwitchNumber + 1)
    {
    case 1:
        std::cout << "Number Case 1:" << SwitchNumber << std::endl;
        break;
    case 2:
        std::cout << "Number Case 2:" << SwitchNumber << std::endl;
        break;
    case 3:
        std::cout << "Number Case 3:" << SwitchNumber << std::endl;
        break;

    default:
        std::cout << "Default" << std::endl;
    }


    /* 반복문
        for : 지정한 횟수만큼 반복
        구문 - Statement
        - 독립된 명령문의 형태

        for(구문1;구문2;구문3)
        {
            실행코드
        }

        구문1
        - for loop 실행될 때 최초 한번 실행
        - 반복 실행을 위한 변수 초기화

        구문2
        - 반복 실행될 때 마다 실행
        - 반복의 실행 여부를 판단(조건식이 사용됨)
        - 해당 횟수 코드 블럭 실행 전 판단

        구문3
        - 반복 실행될 때 마다 실행
        - 반복 실행이 스텝/카운트
        - 해당 횟수 코드 블럭 실행 후 카운트 증/감



    */
    // 1부터 10까지의 합
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;
        std::cout << "sum:" << sum << std::endl; // 누계 값 출력
    }
    std::cout <<"SumTotal:"<< sum << std::endl; //합계 값 출력


    // 1부터 10까지의 짝수의 합
    int evensum = 0;
   
    for (int i = 2 ; i <= 10; i+=2) 
    {
        evensum = evensum + i;
        std::cout << "even:" << evensum << std::endl;
    }
    std::cout << "eventotal:" << evensum << std::endl;

    /*
    while(조건식)
    {
        실행코드;
    }  
    */
    
    int total = 0;
    int Count = 1;
    while(Count <= 10)
    {
        total += Count;
        std::cout << "Total : " << total << std::endl;
        
        Count++;
    }

   //while(true){} : 무한 루프
   /* while (true)
    {
        실행코드

        비교 판단 코드
        if(조건식)
        {
            break; // 현재 코드가 포함된 코드 블럭을 빠져나간다. ->> 걸어놓은 루프를 빠져나간다.
        }
    }
    */
























}