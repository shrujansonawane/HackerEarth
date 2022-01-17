def find_longest_streak(s,slen):
  longest_streak = 0
  streak = 0
  for i in range(slen):
    if s[i] == 'C':
      streak += 1
    else:
      streak = 0
    longest_streak = max(streak,longest_streak)
  return longest_streak

def roys_life_cycle():
  month_life = ''
  N = int(input())
  day_streak = []
  for i in range(N):
    day = input()
    dlen = len(day)
    day_streak.append(find_longest_streak(day,dlen))
    month_life += day
  print(max(day_streak),find_longest_streak(month_life,len(month_life)))

roys_life_cycle()
