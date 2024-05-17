#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    int roll;
    string name;
    int room;
    string gender;
};

bool compareByRoll(const Student &a, const Student &b) {
    return a.roll < b.roll;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N, K;
        cin >> N >> K;

        Student students[K];
        for (int i = 0; i < K; i++) {
            cin >> students[i].roll >> students[i].name >> students[i].room >> students[i].gender;
        }

        sort(students, students + K, compareByRoll);

        int Q;
        cin >> Q;

        cout << "Case #" << t << ":" << endl;
        for (int q = 1; q <= Q; q++) {
            int roomNumber;
            cin >> roomNumber;

            cout << "Query #" << q << ":" << endl;

            bool found = false;
            for (int i = 0; i < K; i++) {
                if (students[i].room == roomNumber) {
                    found = true;
                    cout << students[i].roll << " " << students[i].name << " " << students[i].gender << endl;
                }
            }

            if (!found) {
                cout << "No Student" << endl;
            }
        }
    }

    return 0;
}
