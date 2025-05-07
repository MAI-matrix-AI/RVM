import matplotlib.pyplot as plt

class showGraph1():
    def depend1(val1):
        res1 = val1**2 + 1
        return res1
    
    def depend2(val2, val3):
        res2 = val2*(val**2)
        return res2

result = depend1(for i in range(20))
x_axis = [for i in range(20)]
y_axis = result
plt.plot(x_axis, y_axis, color='green', linestyle='--', marker='o')
plt.show

result = depend2(for i in range(20))
x_axis2 = [for i in range(20)]
y_axis2 = result
plt.plot(x_axis2, y_axis2, color='blue', linestyle='--', marker='o')
plt.show
