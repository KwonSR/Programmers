#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    
    if( a != b && b!=c && a!=c)
        return a+b+c;
    else if(a==b && b==c && a==c)
        return (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);  
    else
        return (a+b+c) * (a*a + b*b + c*c);
    
    // set container
    // 연관 컨테이너 / 노드 기반 컨테이너, 균형 이진트리
    // key 원소의 집합 / key값 중복이 안됨
    // insert 삽입 -> 자동 정렬 (default 오름차순)
    // set<int> num{a, b, c};
    // if(num.size() == 3)
    //     return a+b+c;
    // else if(num.size() == 2)
    //     return (a+b+c)*(a*a + b*b + c*c);
    // else
    //     return (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);    
}