from collections import deque

q = deque()

q.append('1st Element')
q.append('2nd Element')
q.append('3rd Element')

print(q)

a = q.popleft()
print('The first popped element is:', a)

b = q.popleft()
print('The second popped element is:', b)

c = q.popleft()
print('The third popped element is:', c)
