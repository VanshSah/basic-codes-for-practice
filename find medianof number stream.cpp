#include<iostream>
#include<queue>
using namespace std;
class mF                                 // mF = median finder
{
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    public:
        void addNum(int num)          
        {
            maxHeap.push(num);
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            if(maxHeap.size() < minHeap.size())
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }
    double findMedian()          
    {
        return maxHeap.size() > minHeap.size() ? maxHeap.top() : (maxHeap.top() + minHeap.top()) / 2.0;
    }   
};
int main()
{
    mF mf;
    double arr[] = {5, 15, 10, 20, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++)
    {
        mf.addNum(arr[i]);
        cout<<"Median : " << mf.findMedian()<<endl;
    }
    return 0;
}
