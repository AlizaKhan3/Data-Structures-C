#include <iostream>
#include <stack>
#include <algorithm>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(const string& infix) {
    stack<char> s;
    string postfix;
    
    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

string infixToPrefix(const string& infix) {
    stack<char> s;
    string prefix;
    string reversed_infix = infix;
    
    reverse(reversed_infix.begin(), reversed_infix.end());
    for (char& ch : reversed_infix) {
        if (ch == '(') ch = ')';
        else if (ch == ')') ch = '(';
    }

    for (char ch : reversed_infix) {
        if (isalnum(ch)) {
            prefix += ch;
        } else if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                prefix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && precedence(s.top()) > precedence(ch)) {
                prefix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

string postfixToInfix(const string& postfix) {
    stack<string> s;
    
    for (char ch : postfix) {
        if (isalnum(ch)) {
            s.push(string(1, ch));
        } else {
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            string expr = "(" + op1 + ch + op2 + ")";
            s.push(expr);
        }
    }

    return s.top();
}

string prefixToInfix(const string& prefix) {
    stack<string> s;
    
    // Traverse the prefix expression from right to left
    for (int i = prefix.length() - 1; i >= 0; i--) {
        char ch = prefix[i];
        if (isalnum(ch)) {
            s.push(string(1, ch));
        } else {
            // Pop two operands from the stack
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            // Create a new expression
            string expr = "(" + op1 + ch + op2 + ")";
            s.push(expr);
        }
    }

    return s.top();
}
// K+L-M*N+(O^P)*W/u/v*T+Q


int main() {
    string infix;
    
    cout << "Enter Infix Expression: ";
    cin >> infix;

    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << infixToPostfix(infix) << endl;
    cout << "Prefix: " << infixToPrefix(infix) << endl;

    string postfix = infixToPostfix(infix);  // Example postfix conversion of the given infix
    cout << "Postfix to Infix: " << postfixToInfix(postfix) << endl;

    string prefix = infixToPrefix(infix);  // Example prefix conversion of the given infix
    cout << "Prefix to Infix: " << prefixToInfix(prefix) << endl;

    return 0;
}
