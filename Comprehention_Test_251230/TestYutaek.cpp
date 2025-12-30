#include <iostream>

using namespace std;

class TestYutaek {
public: // 1. 외부에서 이 함수를 호출할 수 있도록 공개 설정

    // 2. 문자열을 출력하는 'printMessage' 함수 정의
    void printMessage() {
        cout << "안녕하세요! TestYutaek 클래스에서 출력하는 메시지입니다." << endl;
    }
};