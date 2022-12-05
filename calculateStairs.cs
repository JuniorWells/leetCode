// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

public class Solution {
    public int ClimbStairs(int n) {
        if (n <= 1) return 1;

        int minusTwo = 1;
        int minusOne = 1;
        int inQuestion = 0;

        for (int i = 2 ; i <= n; i++)
        {
            inQuestion = minusTwo + minusOne;
            minusTwo = minusOne;
            minusOne = inQuestion;
        }

        return inQuestion;
    }
}