#include <iostream>

using namespace std;

int main() {

    // Vectors in C++
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // vector = {1, 2, 3}
    vector.size() // 3


    // Stack in C++
    stack<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(7);

    numbers.top(); // 7


    // Queue in C++
    queue<int> q;

    for(int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        cout << q.front() << endl; 
        q.pop();
    }


    // Priority Queue
    priority_queue<int> numbers; // default is max heap

    numbers.push(1);
    numbers.push(2);
    numbers.push(7); // highest priority
    numbers.push(3);

    numbers.top(); // Output 7

    // min heap
    struct comp {
        bool operator()(int a, int b){
            return a > b;
        }
    }
    priority_queue<int, vector<int>, comp> numbers;

    numbers.push(1); // highest priority
    numbers.push(2);
    numbers.push(7); 
    numbers.push(3);

    numbers.top(); // Output 1


    // Set Example
    set<int> setofNumbers;
    // Insert four elements
    setofNumbers.insert(1);
    setofNumbers.insert(2);
    setofNumbers.insert(3);
    setofNumbers.insert(3);
    setofNumbers.insert(4);
    
    for (auto &x:setofNumbers) cout << ' ' << x  // Output: 1 2 3 4


    // Map Example
    map<char, int> first; // map<key datatype, value datatype>
    first['a'] = 10;
    first['b'] = 20;
    first['c'] = 30;
    first['d'] = 40;
    map<char, int>::iterator it;
    for (it=first.begin(); it!=first.end(); ++it){
        cout << it->first << "=>" << it->second << '\n';  // Key and value are stored as a pair
    }
    

    // Iterating the arrays (vector, queue, map etc) without information. Eg:-
    vector<int> v = {1, 2, 3, 4, 5};
    for(int x:v){
        cout << x;
    }

    return 0;
}



// Example Question for Queue
// merge two list in sorted order

struct comp {
    bool operator()(int a, int b){
        return a > b;
    }
}

priority_queue<int, vector<int>, comp> min_heap; // min priority queue

int main(){
vector<int> a = {1, 9, 2, 4, 6, 1};
vector<int> b = {0, 3, 5, 2, 7, 19};

for (int x:a) min_heap.push(x);
for (int x:b) min_heap.push(x);
vector<int> ans;
while(!min_heap.empty()){
    int item = min_heap.top();
    min_heap.pop();
    ans.push_back(item);
}
}




// Example Question for Set
// Check if the list contains duplicates or not

int main () {
    set<int> st;
    vector<int> a = {1, 2, 4, 3, 5, 6, 8, 9};
    for(int x: a){
        st.insert(a);
    }

    if (st.size != a.size()){
        cout << "Contains duplicate" << endl;
    }
    else {
        cout << "Unique" << endl;
    }
}



// Example Question for map
// Find the character that appears in this string the maximum number of times
int main(){
    string s = "sladjfhbpuiwobegwe";
    map<char, int> mp;

    for (char a:s) mp[a]++;
    char maxx;
    int tot = 0;
    for (auto i:mp) {
        if(i.second > tot){
            tot = i.second;
            maxx = i.first;
        }
    }

    cout << maxx << "=" << tot << endl;
}