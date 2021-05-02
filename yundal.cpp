#include <iostream>
using namespace std;

//윤달구하기
int main()
{

    int n;
    cin >> n; //cin 입력을 받겠다 키보드로 입력을받는구문

    //받는 함수가 뭐야
    // 그리고 쓰는 함수가 뭐지?
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {

        cout << 1;
    }
    else
    {
        cout << 0;
    }

} //end main

//Hello World!를 출력하시오.

//https://github.com/chlaudeh/C-problem-solving.git
