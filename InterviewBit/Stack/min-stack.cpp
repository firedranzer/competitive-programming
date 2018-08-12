vector<int> v;
vector<int> minnum;
MinStack::MinStack() {
    v.clear();
    minnum.clear();
}

void MinStack::push(int x) {
    v.push_back(x);
    if(minnum.empty())
        minnum.push_back(x);
    else    minnum.push_back(min(minnum.back(), x));
}

void MinStack::pop() {
    if(!v.empty()){
        v.pop_back();
        minnum.pop_back();
    }
    else    return;
}

int MinStack::top() {
    if(!v.empty()){
        return v.back();
    }
    else    return -1;
}

int MinStack::getMin() {
    if(!v.empty()){    
        return minnum.back();
    }
    else    return -1;
}

