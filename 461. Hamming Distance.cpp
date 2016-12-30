class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance = 0;
        int bitX, bitY; // calculate Hamming Distance per bit;
        
        while(x != 0 || y != 0){
            bitX = x % 2;
            x = x >> 1;
            bitY = y % 2;
            y = y >> 1;
            
            if(bitX ^ bitY) // bitX differs from bitY, distance +1;
                distance++;
        }
        
        return distance;
    }
};
