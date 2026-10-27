class LinkedList {

private:
    std::vector<int> myList;
public:
    LinkedList() {
        
    }

    int get(int index) {
        if (myList.size() == 0 || index > (myList.size() - 1)) {
            return -1;
        }
        return myList[index];
    }

    void insertHead(int val) {
        myList.insert(myList.begin(), val);
    }
    
    void insertTail(int val) {
        myList.push_back(val);
    }

    bool remove(int index) {
        if (index > myList.size() - 1 || index < 0) {
            return false;
        }
        

        if (myList.size() == 0) {
            return false;
        }
        myList.erase(myList.begin() + index);
        return true;
        
    }

    vector<int> getValues() {
        return myList;
    }
};
