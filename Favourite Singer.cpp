#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<long long, int> singerCount;
    long long singer;
    int maxCount = 0;

    // قراءة الأغاني وحساب عدد الأغاني لكل مغني
    for (int i = 0; i < N; i++) {
        cin >> singer;
        singerCount[singer]++;
        if (singerCount[singer] > maxCount) {
            maxCount = singerCount[singer];
        }
    }

    // حساب عدد المغنيين المفضلين (الذين لديهم العدد الأكبر من الأغاني)
    int favouriteSingers = 0;
    for (const auto& pair : singerCount) {
        if (pair.second == maxCount) {
            favouriteSingers++;
        }
    }

    // طباعة النتيجة
    cout << favouriteSingers << endl;

    return 0;
}
