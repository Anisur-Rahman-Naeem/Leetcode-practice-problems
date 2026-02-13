class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> result;  
        // This will store the final answer.
        // Since the problem guarantees exactly one solution,
        // we could directly return instead of storing in a vector,
        // but this approach is also valid.

        int n = numbers.size();

        int left = 0;  
        // Left pointer starts at index 0.
        // IMPORTANT: Even though the problem asks for 1-based indexing,
        // the vector itself is 0-indexed internally.

        int right = n-1;  
        // Right pointer starts at the last index.

        while (left<right)
        {
            // We maintain left < right so that:
            // 1) We never use the same element twice.
            // 2) We stay within valid bounds.

            if (numbers[left] + numbers[right] == target)
            {
                // If sum equals target, we found the pair.

                result.push_back(left+1);
                result.push_back(right+1);
                // IMPORTANT:
                // We add +1 here because the problem requires
                // returning 1-based indices.
                // This does NOT mean the array is 1-indexed.
                // The array is still accessed using 0-based indexing.

                break;
                // VERY IMPORTANT:
                // Without break, left and right would not change,
                // causing an infinite loop.
            }

            else if ((left<right) && (numbers[left] + numbers[right] > target))
            {
                // (left < right) is redundant here,
                // because we are already inside while(left < right).

                // If sum is greater than target,
                // we must decrease the sum.
                // Since the array is sorted,
                // move the right pointer to the left.
                right--;
            }

            else if ((left<right) && (numbers[left] + numbers[right] < target))
            {
                // Again, (left < right) is redundant.

                // If sum is smaller than target,
                // we must increase the sum.
                // Move the left pointer to the right.
                left++;
            }
        }

        return result;
        // The returned indices are now correctly 1-based.
    }
};
