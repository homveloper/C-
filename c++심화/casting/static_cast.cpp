
/*
    4가지의 캐스팅

    static_cast : 우리가 흔히 생각하는, 언어적 차원에서 지원하는 일반적인 타입 변환

    const_cast : 객체의 상수성(const) 를 없애는 타입 변환. 쉽게 말해 const int 가 int 로 바뀐다.

    dynamic_cast : 파생 클래스 사이에서의 다운 캐스팅 (→ 정확한 의미는 나중에 다시 배울 것입니다)

    reinterpret_cast : 위험을 감수하고 하는 캐스팅으로 서로 관련이 없는 포인터들 사이의 캐스팅 등
*/

void main() {

    // int a = (int)(2.3);
    int a = static_cast<int>(2.3);

}