nums = [3,2,4]
target = 6
'''
for i in range(len(list)):
    for j in range(i + 1, len(list)):
        if nums[i] + nums[j] == target:
            print(i, j)
            for o in range(len(nums)):
                dict  = {
                    nums[i]: i
                }
            print(dict)
            print(dict[2])
'''

num_dict = {}
for i in range(len(nums)):
    find = target - nums[i]
    
    if find in num_dict and num_dict[find] != i:
        print(num_dict[find], i)
    num_dict[nums[i]] = i
