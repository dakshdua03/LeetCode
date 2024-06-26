import java.util.Stack;
import java.util.Arrays;

class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        Arrays.sort(happiness);
        Stack<Integer> stack = new Stack<>();
          for (int num : happiness) {
            stack.add(num);
        }
        long max = 0;
        int i = 0;
        while (k-- != 0 && !stack.isEmpty())
        {
            int curr = stack.pop();
            if((curr-i)> 0)
            {
                max += (curr-i);
            }
            i++;
        }
        return max;
    }
        
    }