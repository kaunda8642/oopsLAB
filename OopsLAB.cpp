#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Template function to remove duplicates
template <typename T>
vector<T> remove_duplicates(const vector<T>& input) {
    unordered_set<T> seen;
    vector<T> result;

    for (const T& item : input) {
        if (seen.find(item) == seen.end()) {
            seen.insert(item);
            result.push_back(item);
        }
    }

    return result;
}

int main() {
    vector<int> my_vector;

    for (int i = 1; i <= 3; i++) {
        my_vector.push_back(i);
        my_vector.push_back(i);
    }

    cout << "Original vector: ";
    for (int val : my_vector) {
        cout << val << " ";
    }
    cout << endl;

    vector<int> filtered_vector = remove_duplicates(my_vector);

    cout << "Filtered vector (no duplicates): ";
    for (int val : filtered_vector) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
