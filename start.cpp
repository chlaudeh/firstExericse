#include<iostream>
using namespace std;

void swap1(int a,int b){
    //애는 콜바이 밸류 이건 말 그대로 원본에는 영향을 주지 못하기 때문에 바뀌지 않는다
    //여기서 바뀐걸 출력된걸 바꿨으면 바꼇겟지만 원본이랑 상관이 없다
    int tmp=a; //tmp 는 스왑함수  
    a =b;
    b =tmp;
}

void swap2(int *a,int *b){
    //콜바이 어드레스
    //b: a의 주소 a가 b의주소
    int tmp=*a;
    *a= *b;
    *b=tmp;

}

void swap3(int &a,int &b){
    //참조 방식방식 콜바이 레퍼런스
    //call by reference
    //참조 개념으로 하는것이 이것이다
    int tmp=a;
    a = b ;
    b = tmp;

}


int main(){
    int a = 1;
    int b = 2;
    swap1(a,b);
    cout <<"a:"<< a <<"b:"<< b << endl ;
    a = 1;
    b = 2;
    swap2(&a ,&b);
    cout <<"a:" << a <<"b:"<< b << endl;
    a = 1;
    b = 2;
    swap3(a ,b);
    cout << "a:" << a << "b:" << b << endl;

}