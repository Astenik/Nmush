#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s1, s2;
    std::stack<int> s;
    std::stack<int> s3;
    
    for(int i = 0; i < 10; ++i)
    {
        s1.push(2*i + 1);
        s2.push(2*i);
    }
    
    while(!s1.empty())
    {
        s.push(s1.top());
        s1.pop();
    }
    while(!s.empty())
    {
        s3.push(s.top());
        s.pop();
    }
    while(!s2.empty())
    {
        s3.push(s2.top());
        s2.pop();
    }
    
    while(!s3.empty())
    {
        std::cout << s3.top() << " ";
        s3.pop();
    }
    std::cout << std::endl;
    
    return 0;
}
