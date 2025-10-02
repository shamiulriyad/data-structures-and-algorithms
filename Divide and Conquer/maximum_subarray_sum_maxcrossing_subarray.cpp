#include using namespace std;
const int INF = 1e9;

struct SubarrayResult {
int sum;
int leftIndex;
int rightIndex;
};

SubarrayResult maxcrossingsubarray(vector a, int start, int mid, int end) {
int lsum = 0;
int lmax = -INF;
int lmaxindex = -1;
for (int i = mid; i >= start; i--) {
lsum = lsum + a[i];
if (lsum > lmax) {
lmax = lsum;
lmaxindex = i;
}
}

int rsum = 0;
int rmax = -INF;
int rmaxindex = -1;
for (int i = mid + 1; i <= end; i++) {
rsum = rsum + a[i];
if (rsum > rmax) {
rmax = rsum;
rmaxindex = i;
}
}
return {lmax + rmax, lmaxindex, rmaxindex};
}

SubarrayResult maxsubarray(SubarrayResult leftRes, SubarrayResult rightRes, SubarrayResult crossRes) {
if (leftRes.sum >= rightRes.sum && leftRes.sum >= crossRes.sum) {
return leftRes;
} else if (rightRes.sum >= leftRes.sum && rightRes.sum >= crossRes.sum) {
return rightRes;
} else {
return crossRes;
}
}

SubarrayResult maximumsubarray(vector a, int start, int end) {
if (start == end) {
return {a[start], start, end};
}
int mid = (start + end) / 2;
SubarrayResult leftsum = maximumsubarray(a, start, mid);
SubarrayResult rightsum = maximumsubarray(a, mid + 1, end);
SubarrayResult crossRes = maxcrossingsubarray(a, start, mid, end);
return maxsubarray(leftsum, rightsum, crossRes);
}

int main() {
vector a = {-16,-23,18,20,-7,12,-5};
SubarrayResult result = maximumsubarray(a, 0, a.size() - 1);
cout << "Sum: " << result.sum << "\n";
cout << "Start index: " << result.leftIndex << "\n";
cout << "End index: " << result.rightIndex << "\n";
return 0;
}