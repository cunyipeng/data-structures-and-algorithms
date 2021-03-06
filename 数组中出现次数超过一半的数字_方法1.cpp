class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int n = numbers.size();
        if(n == 0)
            return 0;
        int count = 1;
        int num = numbers[0];
        for(int i = 1; i < n; i++){
            if(numbers[i] == num) 
                count++;
            else
                count--;
            if(count == 0){
                num = numbers[i];
                count = 1;
            }
        }
        count = 0;
        for(int i = 0; i < n; i++){
            if(numbers[i] == num) 
                count++;
        }
        if(count * 2 > n)
            return num;
        return 0;
    }
};

