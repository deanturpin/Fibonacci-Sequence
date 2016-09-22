function fibonacci {

	local n=$1

	if [[ $n == 1 ]]; then
	
		echo $n
	else

		local m=$(fibonacci $((n - 1)))

		echo $((m * n))
	fi
}

fibonacci 5
