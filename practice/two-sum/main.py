'''
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.


Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
'''

def twoSum(nums, target):
    # Create a dictionary to store the value and its index.
    num_map = {}
    
    # Iterate through the list of numbers.
    for i, num in enumerate(nums):
        # Calculate the complement of the current number.
        complement = target - num
        
        # Check if the complement exists in the dictionary.
        if complement in num_map:
            return [num_map[complement], i]
        
        # Otherwise, store the current number and its index.
        num_map[num] = i

num_input = input("Enter the numbers separated by spaces: ").split()
nums = []
for num in num_input:
    nums.append(int(num))

target = int(input("Enter the target: ").strip())

print("Indexes:", twoSum(nums, target))
