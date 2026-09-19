// POTD Sep'19, 2026
// Sep'19, 2026 10:20 pm

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x= max(x1, min(xCenter, x2));
        int y= max(y1, min(yCenter, y2));

        return (x - xCenter)*(x - xCenter) + (y - yCenter)*(y-yCenter) <= (radius)*(radius);
    }
};

// Comments