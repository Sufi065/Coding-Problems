class Car {
public:
    int idx;
    int dist;

    Car(int idx, int dist){
        this->idx = idx;
        this->dist = dist;
    }

    bool operator<(const Car &obj) const {
        return this->dist < obj.dist; // max heap
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<Car> pq;

        for(int i = 0; i < points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];

            int dist = x*x + y*y;
            pq.push(Car(i, dist));

            if(pq.size() > k){
                pq.pop(); // remove farthest
            }
        }

        vector<vector<int>> result;

        while(!pq.empty()){
            int idx = pq.top().idx;
            pq.pop();
            result.push_back(points[idx]);
        }

        return result;
    }
};
TC:O(n)

