class MedianFinder {
public:
    priority_queue<int> leftq; //max heap
    priority_queue<int, vector<int>, greater<int>> rightq; //mean heap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(leftq.empty()|| num<leftq.top())
            leftq.push(num);
        else
            rightq.push(num);
        if(leftq.size()>rightq.size()+1)
        {
            rightq.push(leftq.top());
            leftq.pop();
        }
        else if(leftq.size()+1<rightq.size()){
            leftq.push(rightq.top());
                rightq.pop();
        }
    }
    
    double findMedian() {
        return leftq.size()==rightq.size()?leftq.empty()?0:(leftq.top()+rightq.top())/2.0 :
        leftq.size()>rightq.size()?leftq.top():rightq.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */