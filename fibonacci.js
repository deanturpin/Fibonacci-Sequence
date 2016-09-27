function fibonacci(n) {

	return (
		n == 0 ? 0 :
		n == 1 ? 1 :
		fibonacci(n - 1) + fibonacci(n - 2)
	)
}

var sequence = ""

for (var i = 0; i <= 14; ++i)
	sequence += fibonacci(i) + " "

console.log(sequence)
