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
    ///�׽�Ʈ ���̽� , ������ ������ pre�� ���� ������ now��
    ///pre �ʱⰪ�� 0�� ������ ó������ 1���� ���� ���ͼ� ������ ũ�� �����ų����

    cin >> N; /// Testcase input
    st.push(pre);///�񱳸� ���ؼ� 0 �ֱ�
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
    ///������ ������ ������ ������ ž����
    ///Ŭ���� ������������ push �׸��� pop
    ///������ �����̶� �������� pop �ٷ�
    ///���� ���� no ���

    return 0;
}
