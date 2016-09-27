#!/bin/bash

function fibonacci {

	local n=$1

	[[ $n == 0 ]] && echo $n && return
	[[ $n == 1 ]] && echo $n && return
	
	local x=$(fibonacci $((n - 1)));
	local y=$(fibonacci $((n - 2)));

	echo $((x + y))
}

for i in {0..14}; do
	echo -n "$(fibonacci $i) "
done

echo
