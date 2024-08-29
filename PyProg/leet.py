class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        lst = list(s)
        lst2 = [] #a list to put the words in it
        for i in range(len(lst)):
            string = ""
            string = string + lst[i]
            for j in range(i, len(lst)-i):

                if not i == j:
                    if lst[i]==lst[j]:
                        lst2.append(string)
                    else:
                        string = string + lst[i]
        lenght = 0
        print(lst2)
        for i in range(len(lst2)):
            print(lst2[i])
            if len(lst2[i])>lenght :
                lenght = len(lst2[i])
         
        return lenght


sol = Solution()
sol.lengthOfLongestSubstring("abcabcbb")