using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    long long total_price = 0;
    
    for(int i = 1 ; i <= count ; i++)
        total_price += price * i;
    
    if(total_price <= money)
        answer = 0;
    else 
        answer = total_price - money;
    
    return answer;
}