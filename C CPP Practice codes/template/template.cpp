#include <iostream>
using namespace std;

template <typename T>
T& maximum(T& ref1, T& ref2) {
        return ref1 > ref2 ? ref1 : ref2;
}

class Result {
        private:
                int marks;
        public:
                Result(int marks) {
                        this->marks = marks;
                }
                void display() {
                        cout << "Marks of this paper are: " << marks << endl;
                }
                bool operator>(Result& ref1 , Result& ref2) {
                        return ref1.marks > ref2.marks ? true : false;
                }
                ostream& operator<<(ostream& out , Result& ref) {
                        out << ref.marks ;
                        return out;
                }
};

class TestScore {
        private:
                int score;
                friend  bool operator>(TestScore& ref1 , TestScore& ref2) {
                        return ref1.score > ref2.score ? true : false;
                }
        public:
                TestScore(int score):score(score) {

                }


                ostream& operator<<(ostream& out , TestScore& ref) {
                        out << ref.score << endl;
                }
};

int main() {
        Result paper1(90);
        Result paper2(85);

        Result SGPA = maximum(paper1, paper2);
        cout << SGPA <<endl;

        TestScore Virat(200);
        TestScore Dhoni(50);

        TestScore Max = maximum(Virat , Dhoni);
        cout << "MAximum score " << Max <<endl;
}
