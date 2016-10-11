#!/usr/bin/lua5.3

function fibonacci(n)

	if n == 0 then return 0

	elseif n == 1 then return 1

	else return fibonacci(n - 1) + fibonacci(n - 2)
	end

end

print("lua", fibonacci(14))
