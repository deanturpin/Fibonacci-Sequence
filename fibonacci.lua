#!/usr/bin/lua5.3

function fibonacci(n)

	if n < 2 then return n end

	return fibonacci(n - 1) + fibonacci(n - 2)
end

print("lua", fibonacci(14))
