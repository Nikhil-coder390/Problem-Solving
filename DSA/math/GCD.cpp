class Solution {
public:
    int GCD(int n1,int n2) {
        while(n1!=0 && n2!=0){
            if(n1>n2) n1 = n1%n2;
            else n2 = n2%n1;
        }
        if(n2==0) return n1;
        else return n2;
    }
};
#include <iostream>

int main() {
    Solution sol;
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int result = sol.GCD(a, b);
    std::cout << "GCD: " << result << std::endl;
    return 0;
}