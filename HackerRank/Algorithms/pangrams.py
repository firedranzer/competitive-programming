from collections import Counter

s = input().lower()
print("pangram" if len(Counter(s))==27 else "not pangram")
