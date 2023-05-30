//solve again
class MyHashSet {
private:
    std::vector<std::vector<int>> buckets;
    int numBuckets;

    // Hash function to calculate the index of a key in the buckets array
    int hash(int key) {
        return key % numBuckets;
    }

public:
    MyHashSet() {
        numBuckets = 1000; // Choose an appropriate number of buckets
        buckets.resize(numBuckets);
    }
    
    void add(int key) {
        int index = hash(key);
        std::vector<int>& bucket = buckets[index];

        // Check if the key already exists in the bucket
        for (int k : bucket) {
            if (k == key) {
                return; // Key already exists, no need to add
            }
        }

        // Add the key to the bucket
        bucket.push_back(key);
    }
    
    void remove(int key) {
        int index = hash(key);
        std::vector<int>& bucket = buckets[index];

        // Find and remove the key from the bucket
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (*it == key) {
                bucket.erase(it);
                return; // Key removed
            }
        }
    }
    
    bool contains(int key) {
        int index = hash(key);
        std::vector<int>& bucket = buckets[index];

        // Check if the key exists in the bucket
        for (int k : bucket) {
            if (k == key) {
                return true; // Key found
            }
        }

        return false; // Key not found
    }
};


/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */