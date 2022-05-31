#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    for (int i = 0; i < 10; i++) {
        st.push(i);
    }
    printf("Stack size:%d\n", st.size());
    int i_size = st.size();
    for (int i = 0; i < i_size; i++) {
        printf("%d ", st.top());
        st.pop();
    }

    return 0;
}