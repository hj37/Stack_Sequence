#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    stack<int> st;
    int N; int pre = 0; int now;
    ///테스트 케이스 , 이전의 수열을 pre로 지금 수열을 now로
    ///pre 초기값이 0인 이유는 처음에는 1부터 값이 들어와서 무조건 크게 통과시킬려고

    cin >> N; /// Testcase input
    st.push(pre);///비교를 위해서 0 넣기
    string txt;
    while(N--)
    {
        cin>>now;
        if(now > st.top())
        {
            while(pre < now)
            {
                pre++;
                st.push(pre);
                txt.append("+\n");///output
            }
            st.pop();
            txt.append("-\n");///output
            pre = now;
        }
        else if(now == st.top())
        {
            st.pop();
            txt.append("-\n");///output
        }
        else{
            txt.clear();
            txt.append("NO");///output
            break;
        }
    }

    for(char ch: txt)
    {
        cout << ch;
    }
    ///현재의 임의의 수열이 스택의 탑보다
    ///클때는 같아질떄까지 push 그리고 pop
    ///임의의 수열이랑 같을때는 pop 바로
    ///작을 때는 no 출력

    return 0;
}
