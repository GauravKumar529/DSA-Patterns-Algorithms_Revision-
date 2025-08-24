Boyer-Moore Voting Algorithm

⏱ Complexity:    Time: O(n) Space: O(1)

⚡ When to Use:
#Majority element is guaranteed or highly likely.

#Need efficient solution with minimal memory.

#Can extend to “more than n/k times” problem with tweaks. -> each element ike for n  / 2 there only present on e element -> strixtly(>) 
#  if( majority >n /3 ) means take ex n = 9 ,  n/3 = 3-> need eleement which appear  atleast  4 times , 1*4 +1*4+  no-> means there xist only two element such that follow this condition eise SOCHTE HAI (MAIN POINT)

🛠 Steps / Dry Run Idea:
Initialize candidate = None, count = 0.

For each element:
If count == 0, set candidate = element, count = 1.
Else, if element == candidate, increment count.
Else, decrement count.
Optional verification: Count occurrences of candidate in array to confirm majority.

⚠️ Pitfalls:
Algorithm may give wrong result if no majority element exists.
Always verify candidate if majority isn’t guaranteed.

💡 How to Think for Subproblems:
#Whenever a problem asks for most frequent element or element above a threshold frequency, think: “Can I use Moore’s Voting?”
#Use counting + candidate approach instead of full hashmaps to save space.
# REMEMBER I USE THIS ONOLY WHEN HTHERE EXITS A MAJORITY ELEMENT -> OW IT GIVE WRONG ANSWEER , A PROBLEM HAPPENING ON CODEFORCES





