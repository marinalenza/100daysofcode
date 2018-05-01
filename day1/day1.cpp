/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    int A = 0;
    int B = 0;
    int C = 0;
    bool Q = (A&&B&&C)||(A&&(!B)||(!C)); //0 0 0
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    A = 1;  // 1 0 0
    Q = (A&&B&&C)||(A&&(!B)||(!C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    B = 1;  //1 1 0
    Q = (A&&B&&C)||(A&&(!B)||(!C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    C = 1; //1 1 1
    Q = (A&&B&&C)||(A&&(!B)||(!C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    A = 0;  //0 1 1
    Q = (A&&B&&C)||(A&&(!B)||(!C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    B = 0;  //0 0 1
    Q = (A&&B&&C)||(A&&(!B)||(!C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    A = 1;  //1 0 1
    Q = (A&&B&&C)||(A&&(!B)||(!C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    A = 0;
    B = 1;
    C = 0; //0 1 0
    Q = (A&&B&&C)||(A&&(!B)||(!C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<(A&&B&&C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<std::endl;
    return 0;
}