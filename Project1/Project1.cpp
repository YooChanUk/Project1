// Project1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "Wonderful c++\n";

    char irum[30];
    cout << "성함과 전화번호를 입력하세요\n";
    //cin >> irum;
    cin.getline(irum, sizeof(irum));

    cout << "구매 금액을 입력하세요." << endl;
    int caltot, calpoint;
    cin >> caltot;
    calpoint = caltot * 0.01;

    cout << irum << "님 금회 발생 포인트 = " << calpoint << "입니다." << endl;
}
