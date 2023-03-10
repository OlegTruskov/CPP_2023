#include <iostream>
using namespace std;

class Bucket {
    private:

        int volume = 12;
        int used = 3;

        void flush() {
            used = 0;
        }
        int fill(int v) {
            if (v > (volume - used)) {
             v = v - (volume - used);
             used = volume;
            }
            else
            {
                used = used + v;
                v = 0;
            }
            return v;
        }
};

int main()
{

    Bucket test_01;
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n"; // 12, 3
    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";  // 12, 5

    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";   // 8, 0
    return 0;
}
