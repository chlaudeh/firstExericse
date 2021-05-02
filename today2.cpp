#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    //vector에 숫자를 집어 넣으려면 push_back 함수로 집어넣어어햔다
    vector<int> answer; //정답들어가 있는 배열

    //배열은 언제나 위에

    //한마디로 arr 의 배열 값을 divisor로 나누엇을때 떨어지는 값을 오름차순으로 반환
    //나누어 떨어지는 값이 하나도 없다면 배열 -1을 담아 반환하세요

    //배열이 여러개면 이거를 나누기 divisor로 해서 %나누어 떨어지는값을
    int flag = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] % divisor == 0)
        {
            flag = 1;
            answer.push_back(arr[i]);
        }
    }

    if (flag == 0)
    {
        answer.push_back(-1);
    }

    sort(answer.begin(), answer.end());

    return answer;
}