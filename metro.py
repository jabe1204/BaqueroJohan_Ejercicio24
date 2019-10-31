plt.figure()
n_points = 10000
sigma = 1.0
x = gauss_metropolis(sigma, N=n_points)

x_model = np.linspace(x.min(), x.max(), n_points)
y_model = gaussian(x_model, sigma)

_ = plt.hist(x, bins=30, density=True, label='Metropolis-Hastings')
plt.plot(x_model, y_model, label='Modelo')

plt.legend()
plt.xlabel("X")
plt.ylabel("Y")
plt.savefig("gaussian_metropolis.png")