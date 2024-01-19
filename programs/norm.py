import numpy as np
import matplotlib.pyplot as plt
from scipy import stats
linestyles = ['-','--',':']
fig = plt.figure(figsize=(10,6))
ax = fig.add_subplot(111)
xs = np.linspace(-5, 5, 100)
params = [(0,1), (0,2), (1,1)]
for param, ls in zip(params, linestyles):
    mu, sigma = param
    rv = stats.norm(mu, sigma)
    ax.plot(xs, rv.pdf(xs), label=f'N({mu}, {sigma**2})', ls=ls, color='gray')
ax.legend()
plt.show()
