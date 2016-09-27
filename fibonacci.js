function fibonacci(n) {

	return (
		n == 0 ? 0 :
		n == 1 ? 1 :
		fibonacci(n - 1) + fibonacci(n - 2)
	)
}

console.log(
	fibonacci(0),
	fibonacci(1),
	fibonacci(2),
	fibonacci(3),
	fibonacci(4),
	fibonacci(5),
	fibonacci(6),
	fibonacci(7),
	fibonacci(8),
	fibonacci(9),
	fibonacci(10),
	fibonacci(11),
	fibonacci(12),
	fibonacci(13),
	fibonacci(14)
)
