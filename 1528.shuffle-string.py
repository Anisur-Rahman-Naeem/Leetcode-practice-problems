#
# @lc app=leetcode id=1528 lang=python
#
# [1528] Shuffle String
#

# @lc code=start
class Solution(object):
    def restoreString(self, s, indices):
        """
        :type s: str
        :type indices: List[int]
        :rtype: str
        """
        result = [""] * len(s)

        # Step 2: Iterate over each character in 's' along with its index
        for index, value in enumerate(s):
            # --- Detailed breakdown of the assignment below ---
            # 1) 'index' is the current position in the source string (0-based).
            #    Example: if index == 0, we're looking at s[0].
            # 2) 'value' is the character at that source position (value == s[index]).
            #    Example: value == "a" when s = "aiohn" and index == 0.
            # 3) 'indices[index]' looks up the target (destination) position for this character.
            #    Example: indices[0] == 3 means the character s[0] should end up at position 3.
            # 4) 'result[ indices[index] ]' therefore refers to the slot in the result list
            #    where this character must be placed (the destination slot).
            # 5) 'result[ indices[index] ] = value' writes the character into that destination slot.
            #
            # Put together: take the character from its original spot in 's' and store it
            # in the correct final position inside 'result', as dictated by 'indices'.
            #
            # Small concrete trace for the first iteration:
            #   s = "aiohn", indices = [3,1,4,2,0]
            #   index = 0, value = "a"
            #   indices[index] -> indices[0] == 3
            #   result[3] = "a"  # result becomes ["", "", "", "a", ""]
            result[indices[index]] = value

        # Step 3: Join the list into a single string
        final_result = "".join(result)

        # Step 4: Return the shuffled string
        return final_result
# @lc code=end

